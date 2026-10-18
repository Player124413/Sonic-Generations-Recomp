package com.sonicgen.recomp

import android.content.Context
import android.net.Uri
import android.provider.DocumentsContract
import android.provider.OpenableColumns
import java.io.File
import java.io.FileOutputStream
import kotlin.concurrent.thread

/**
 * Imports the user's Xbox 360 dump into internal storage.
 *
 * Two shapes are accepted, mirroring the desktop installer:
 *  - a folder (document tree) containing default.xex, copied recursively;
 *  - a single .iso/.xiso file, copied as-is.
 * The copied source path is written to pending_install.txt; on the next
 * game start the native runtime installs it through the regular
 * Installer (folder / ISO handling, title updates) - the same code path
 * as the desktop `--install` flow.
 */
object GameImporter {

    fun importAsync(
        context: Context,
        uri: Uri,
        isTree: Boolean,
        onProgress: (String) -> Unit,
        onDone: (Boolean, String) -> Unit
    ) {
        val appContext = context.applicationContext
        thread(name = "game-import") {
            try {
                val result = importBlocking(appContext, uri, isTree, onProgress)
                onDone(true, result)
            } catch (error: Exception) {
                onDone(false, error.message ?: error.javaClass.simpleName)
            }
        }
    }

    private fun importBlocking(context: Context, uri: Uri, isTree: Boolean, onProgress: (String) -> Unit): String {
        val importDir = AppFiles.importDir(context)
        importDir.deleteRecursively()
        importDir.mkdirs()

        val source: File = if (isTree) {
            val dest = File(importDir, "game")
            copyTree(context, uri, dest, onProgress)
            // The installer wants the folder that directly contains
            // default.xex; find it in case the user picked a parent folder.
            findXexRoot(dest) ?: throw IllegalStateException("В выбранной папке нет default.xex")
        } else {
            val name = queryDisplayName(context, uri) ?: "game.iso"
            val dest = File(importDir, name)
            onProgress("Копирование $name…")
            copyFile(context, uri, dest)
            dest
        }

        AppFiles.pendingInstallFile(context).writeText(source.absolutePath + "\n")
        return source.absolutePath
    }

    private fun findXexRoot(dir: File): File? {
        if (File(dir, "default.xex").isFile) return dir
        val children = dir.listFiles() ?: return null
        for (child in children) {
            if (child.isDirectory) {
                val found = findXexRoot(child)
                if (found != null) return found
            }
        }
        return null
    }

    private fun copyTree(context: Context, treeUri: Uri, destDir: File, onProgress: (String) -> Unit) {
        destDir.mkdirs()
        val treeId = DocumentsContract.getTreeDocumentId(treeUri)
        copyChildren(context, treeUri, treeId, destDir, onProgress)
    }

    private fun copyChildren(
        context: Context,
        treeUri: Uri,
        parentDocId: String,
        destDir: File,
        onProgress: (String) -> Unit
    ) {
        val childrenUri = DocumentsContract.buildChildDocumentsUriUsingTree(treeUri, parentDocId)
        val resolver = context.contentResolver
        val projection = arrayOf(
            DocumentsContract.Document.COLUMN_DOCUMENT_ID,
            DocumentsContract.Document.COLUMN_DISPLAY_NAME,
            DocumentsContract.Document.COLUMN_MIME_TYPE
        )
        resolver.query(childrenUri, projection, null, null, null)?.use { cursor ->
            while (cursor.moveToNext()) {
                val docId = cursor.getString(0)
                val name = cursor.getString(1)
                val mime = cursor.getString(2)
                val childUri = DocumentsContract.buildDocumentUriUsingTree(treeUri, docId)
                if (mime == DocumentsContract.Document.MIME_TYPE_DIR) {
                    copyChildren(context, treeUri, docId, File(destDir, name), onProgress)
                } else {
                    onProgress("Копирование $name…")
                    copyFile(context, childUri, File(destDir, name))
                }
            }
        }
    }

    private fun copyFile(context: Context, uri: Uri, dest: File) {
        dest.parentFile?.mkdirs()
        val input = context.contentResolver.openInputStream(uri)
            ?: throw IllegalStateException("Не удалось открыть ${dest.name}")
        input.use { stream ->
            FileOutputStream(dest).use { out ->
                val buffer = ByteArray(1024 * 1024)
                while (true) {
                    val read = stream.read(buffer)
                    if (read <= 0) break
                    out.write(buffer, 0, read)
                }
            }
        }
    }

    private fun queryDisplayName(context: Context, uri: Uri): String? {
        return try {
            context.contentResolver.query(uri, arrayOf(OpenableColumns.DISPLAY_NAME), null, null, null)?.use { cursor ->
                if (cursor.moveToFirst()) cursor.getString(0) else null
            }
        } catch (_: Exception) {
            null
        }
    }
}
