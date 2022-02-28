#pragma once

#include <RED4ext/Api/v0/FileVer.hpp>

/**
 * @brief Creates a file version using the latest version info type.
 */
#define RED4EXT_FILEVER(major, minor, build, revision) RED4EXT_V0_FILEVER(major, minor, build, revision)
