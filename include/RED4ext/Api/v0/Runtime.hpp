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
#define RED4EXT_V0_RUNTIME_1_52_HOTFIX_1 RED4EXT_V0_FILEVER(3, 0, 60, 1056)
#define RED4EXT_V0_RUNTIME_1_60 RED4EXT_V0_FILEVER(3, 0, 64, 38113)
#define RED4EXT_V0_RUNTIME_1_61 RED4EXT_V0_FILEVER(3, 0, 66, 28510)
#define RED4EXT_V0_RUNTIME_1_61_HOTFIX_1 RED4EXT_V0_FILEVER(3, 0, 68, 49653)
#define RED4EXT_V0_RUNTIME_1_62 RED4EXT_V0_FILEVER(3, 0, 70, 58535)
#define RED4EXT_V0_RUNTIME_1_62_HOTFIX_1 RED4EXT_V0_FILEVER(3, 0, 71, 13361)
#define RED4EXT_V0_RUNTIME_1_63 RED4EXT_V0_FILEVER(3, 0, 72, 45053)
#define RED4EXT_V0_RUNTIME_1_63_HOTFIX_1 RED4EXT_V0_FILEVER(3, 0, 72, 54038)
#define RED4EXT_V0_RUNTIME_2_00 RED4EXT_V0_FILEVER(3, 0, 74, 53121)
#define RED4EXT_V0_RUNTIME_2_01 RED4EXT_V0_FILEVER(3, 0, 74, 63017)
#define RED4EXT_V0_RUNTIME_2_02 RED4EXT_V0_FILEVER(3, 0, 75, 25522)
#define RED4EXT_V0_RUNTIME_2_10 RED4EXT_V0_FILEVER(3, 0, 76, 4238)
#define RED4EXT_V0_RUNTIME_2_11 RED4EXT_V0_FILEVER(3, 0, 76, 41558)
#define RED4EXT_V0_RUNTIME_2_12 RED4EXT_V0_FILEVER(3, 0, 76, 55031)
#define RED4EXT_V0_RUNTIME_2_12_HOTFIX_1 RED4EXT_V0_FILEVER(3, 0, 76, 64179)
#define RED4EXT_V0_RUNTIME_2_13 RED4EXT_V0_FILEVER(3, 0, 77, 64623)
#define RED4EXT_V0_RUNTIME_2_20 RED4EXT_V0_FILEVER(3, 0, 78, 41888)
#define RED4EXT_V0_RUNTIME_2_21 RED4EXT_V0_FILEVER(3, 0, 78, 57301)
#define RED4EXT_V0_RUNTIME_2_30 RED4EXT_V0_FILEVER(3, 0, 80, 33925)

/**
 * @brief Supports all game versions.
 * @note Only use this if you do not use RED4ext.SDK library, but you want to use RED4ext as a loader only.
 */
#define RED4EXT_V0_RUNTIME_INDEPENDENT                                                                                 \
    RED4EXT_V0_FILEVER(static_cast<uint16_t>(-1), static_cast<uint16_t>(-1), static_cast<uint16_t>(-1),                \
                       static_cast<uint16_t>(-1))

/*
 * @brief The latest game version.
 */
#define RED4EXT_V0_RUNTIME_LATEST RED4EXT_V0_RUNTIME_2_30
