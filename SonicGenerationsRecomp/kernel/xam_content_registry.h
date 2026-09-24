#pragma once
#include "xam.h"
#include <mutex>
std::recursive_mutex& XamContentMutex();
bool XamFindContentRoot(const XCONTENT_DATA& data,std::string& root);
bool XamRootClose(std::string_view root);
