"""Read a private ZIP URL from stdin, hash it, and set the Actions secret.

Never pass signed URLs on the command line or write them into tracked files.
Requires an already authenticated GitHub CLI; does not start a workflow.
"""
import hashlib
import subprocess
import sys
import urllib.error
import urllib.parse
import urllib.request

MAX_BYTES = 256 * 1024 * 1024


def validate_url(url):
    parsed = urllib.parse.urlsplit(url)
    if (parsed.scheme != 'https' or not parsed.hostname
            or parsed.username or parsed.password
            or any(c.isspace() for c in url)):
        raise ValueError('Expected a direct HTTPS URL without embedded login credentials.')
    return url


class HTTPSRedirects(urllib.request.HTTPRedirectHandler):
    def redirect_request(self, req, fp, code, msg, headers, newurl):
        validate_url(newurl)
        return super().redirect_request(req, fp, code, msg, headers, newurl)


def zip_digest(url):
    digest = hashlib.sha256()
    total = 0
    prefix = b''
    opener = urllib.request.build_opener(HTTPSRedirects())
    with opener.open(url, timeout=60) as response:
        while chunk := response.read(1024 * 1024):
            if len(prefix) < 4:
                prefix = (prefix + chunk)[:4]
            total += len(chunk)
            if total > MAX_BYTES:
                raise ValueError('Archive exceeds 256 MiB.')
            digest.update(chunk)
    if prefix not in (b'PK\x03\x04', b'PK\x05\x06'):
        raise ValueError('Response does not look like a ZIP. Use a direct download link.')
    return digest.hexdigest(), total


def main():
    url = sys.stdin.readline().strip()
    try:
        validate_url(url)
        digest, size = zip_digest(url)
    except Exception:
        # Network exceptions may contain signed URLs: never echo them.
        print('Cannot validate/download ZIP: check direct HTTPS link, expiry and 256 MiB limit.', file=sys.stderr)
        return 1
    try:
        result = subprocess.run(
            ['gh', 'secret', 'set', 'SHADERS_ZIP_URL'],
            input=url, text=True, capture_output=True, check=False,
        )
    except OSError:
        print('GitHub CLI is required.', file=sys.stderr)
        return 1
    if result.returncode:
        print('Could not set repository secret. Check GitHub connection and repository permissions.', file=sys.stderr)
        return 1
    print('SHADERS_ZIP_URL saved in the current repository Actions secrets.')
    print(f'ZIP size: {size} bytes\nsha256: {digest}')
    print('No workflow has been started. Use this SHA-256 when dispatching the shader workflow.')
    return 0


if __name__ == '__main__':
    sys.exit(main())
