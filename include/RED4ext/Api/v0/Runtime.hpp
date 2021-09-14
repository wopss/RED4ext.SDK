#pragma once

#include <RED4ext/Api/v0/VersionInfo.hpp>

/*
 * CD Projekt RED does use semantic versioning in their game for "PRODUCTVERSION", but the string one and patch notes do
 * not respect the semantic version. It is interpreted as semantic versioning as following:
 *  1.03 -> major: 1, minor: 0, patch: 3.
 *  1.10 -> major: 1, minor: 1, patch: 0.
 *  1.11 -> major: 1, minor: 1, patch: 1.
 *
 * To keep things consinstently we are going to use their own versioning for runtime defines.
 */

#define RED4EXT_V0_RUNTIME_1_03 RED4EXT_V0_SEMVER(1, 0, 3)
#define RED4EXT_V0_RUNTIME_1_04 RED4EXT_V0_SEMVER(1, 0, 4)
#define RED4EXT_V0_RUNTIME_1_05 RED4EXT_V0_SEMVER(1, 0, 5)
#define RED4EXT_V0_RUNTIME_1_06 RED4EXT_V0_SEMVER(1, 0, 6)
#define RED4EXT_V0_RUNTIME_1_10 RED4EXT_V0_SEMVER(1, 1, 0)
#define RED4EXT_V0_RUNTIME_1_11 RED4EXT_V0_SEMVER(1, 1, 1)
#define RED4EXT_V0_RUNTIME_1_12 RED4EXT_V0_SEMVER(1, 1, 2)
#define RED4EXT_V0_RUNTIME_1_20 RED4EXT_V0_SEMVER(1, 2, 0)
#define RED4EXT_V0_RUNTIME_1_21 RED4EXT_V0_SEMVER(1, 2, 1)
#define RED4EXT_V0_RUNTIME_1_22 RED4EXT_V0_SEMVER(1, 2, 2)
#define RED4EXT_V0_RUNTIME_1_23 RED4EXT_V0_SEMVER(1, 2, 3)
#define RED4EXT_V0_RUNTIME_1_30 RED4EXT_V0_SEMVER(1, 3, 0)
#define RED4EXT_V0_RUNTIME_1_31 RED4EXT_V0_SEMVER(1, 3, 1)

/**
 * @brief Supports all game versions.
 * @note Only use this if you do not use RED4ext.SDK library, but you want to use RED4ext as a loader only.
 */
#define RED4EXT_V0_RUNTIME_INDEPENDENT RED4EXT_V0_SEMVER(-1, -1, -1)

/*
 * @brief The latest game version.
 */
#define RED4EXT_V0_RUNTIME_LATEST RED4EXT_V0_RUNTIME_1_31
