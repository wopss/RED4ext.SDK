#pragma once

#include <RED4ext/Api/v0/VersionInfo.hpp>

/**
 * @brief Creates a semantic version using the latest version info type.
 */
#define RED4EXT_SEMVER_EX(major, minor, patch, prereleaseType, prereleaseNumber)                                       \
    RED4EXT_V0_SEMVER_EX(major, minor, patch, prereleaseType, prereleaseNumber)

/**
 * @brief Creates a semantic version using the latest version info type.
 */
#define RED4EXT_SEMVER(major, minor, patch) RED4EXT_V0_SEMVER(major, minor, patch)

namespace RED4ext
{
/**
 * @brief The latest version info type.
 */
using VersionInfo = v0::VersionInfo;
} // namespace RED4ext
