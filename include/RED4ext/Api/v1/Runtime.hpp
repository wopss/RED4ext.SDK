#pragma once

#include <RED4ext/Api/v1/VersionInfo.hpp>

/*
 * CD Projekt RED does not use semantic versioning in their game. It can be interpreted as semantic versioning because
 * patch 1.03 can be translated to the following major: 1, minor: 0, patch: 3.
 *
 * To keep things consinstently we are going to use their own versioning for runtimes.
 */

#define RED4EXT_V1_RUNTIME_1_03 RED4EXT_V1_SEMVER(1, 03, 0)
#define RED4EXT_V1_RUNTIME_1_04 RED4EXT_V1_SEMVER(1, 04, 0)
#define RED4EXT_V1_RUNTIME_1_05 RED4EXT_V1_SEMVER(1, 05, 0)
#define RED4EXT_V1_RUNTIME_1_06 RED4EXT_V1_SEMVER(1, 06, 0)
#define RED4EXT_V1_RUNTIME_1_10 RED4EXT_V1_SEMVER(1, 10, 0)
#define RED4EXT_V1_RUNTIME_1_11 RED4EXT_V1_SEMVER(1, 11, 0)
#define RED4EXT_V1_RUNTIME_1_12 RED4EXT_V1_SEMVER(1, 12, 0)

/**
 * @brief Supports all game versions.
 * @note Only use this if you do not use RED4ext.SDK library, but you want to use RED4ext as a loader only.
 */
#define RED4EXT_V1_RUNTIME_INDEPENDENT RED4EXT_V1_SEMVER(-1, -1, -1)

/*
 * @brief The latest game version.
 */
#define RED4EXT_V1_RUNTIME_LATEST RED4EXT_V1_RUNTIME_1_12
