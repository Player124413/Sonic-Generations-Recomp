#pragma once

#define NOMINMAX

#if defined(_WIN32)
#include <windows.h>
#include <ShlObj_core.h>
#elif defined(__linux__)
#include <unistd.h>
#include <pwd.h>
#endif

#include <algorithm>
#include <array>
#include <bit>
#include <cassert>
#include <chrono>
#include <charconv>
#include <cmath>
#include <csetjmp>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <list>
#include <map>
#include <memory>
#include <mutex>
#include <numeric>
#include <ranges>
#include <set>
#include <span>
#include <string>
#include <string_view>
#include <thread>
#include <unordered_map>
#include <vector>

#include <xbox.h>
#include <xxhash.h>
#include <fmt/core.h>
#include <o1heap.h>
#include <SDL.h>

#include <ppc/ppc_recomp_shared.h>

#include "framework.h"
#include "mutex.h"

#ifndef _WIN32
#include <sys/mman.h>
#endif
