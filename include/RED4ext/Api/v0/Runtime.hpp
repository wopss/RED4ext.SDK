#pragma once

#include <RED4ext/Api/v0/FileVer.hpp>

/*
 * CD Projekt RED does use semantic versioning in their game for "PRODUCTVERSION", but the string one and patch notes do
 * not respect the semantic version. It is interpreted as semantic versioning as following:
 *  1.03 -> major: 1, minor: 0, patch: 3.
 *  1.10 -> major: 1, minor: 1, patch: 0.
 *  1.11 -> major: 1, minor: 1, patch: 1.
 *
 * To keep things consinstently we are going to use their own versioning for runtime defines.
 */

#define RED4EXT_V0_RUNTIME_1_50 RED4EXT_V0_FILEVER(3, 0, 58, 35694)
#define RED4EXT_V0_RUNTIME_1_50_HOTFIX_1 RED4EXT_V0_FILEVER(3, 0, 58, 60196)
#define RED4EXT_V0_RUNTIME_1_50_HOTFIX_2 RED4EXT_V0_FILEVER(3, 0, 58, 63411)
#define RED4EXT_V0_RUNTIME_1_52 RED4EXT_V0_FILEVER(3, 0, 59, 40169)

/**
 * @brief Supports all game versions.
 * @note Only use this if you do not use RED4ext.SDK library, but you want to use RED4ext as a loader only.
 */
#define RED4EXT_V0_RUNTIME_INDEPENDENT RED4EXT_V0_FILEVER(-1, -1, -1, -1)

/*
 * @brief The latest game version.
 */
#define RED4EXT_V0_RUNTIME_LATEST RED4EXT_V0_RUNTIME_1_52
