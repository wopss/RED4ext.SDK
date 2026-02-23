#pragma once

#include <RED4ext/Api/v1/SemVer.hpp>
#include <RED4ext/Version.hpp>

#define RED4EXT_V1_SDK_CURRENT RED4EXT_V1_SEMVER(RED4EXT_VER_MAJOR, RED4EXT_VER_MINOR, RED4EXT_VER_PATCH)

/**
 * @brief Defines the legacy SDK version v0.5.0 for backward compatibility.
 *
 * @deprecated Use `RED4EXT_V1_SDK_CURRENT`. Maintained for compatibility with older loaders and may be removed in a
 * future release.
 *
 * @note Since SDK v0.5.0 and v1.0.0 are mostly the same, this macro allows plugins to report themselves as compiled
 * with SDK v0.5.0. This ensures they can still be loaded by older loaders that do not recognize SDK v1.0.0.
 */
#define RED4EXT_V1_SDK_1_0_0_COMPAT_0_5_0 RED4EXT_V1_SEMVER(0, 5, 0)
