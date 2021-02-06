#pragma once

#include <RED4ext/Api/v1/IRED4ext.hpp>
#include <RED4ext/Api/v1/PluginInfo.hpp>

/*
 * The SDK is using only one version, the reason behind that is that multiple versions for every structure is
 * going to be a pain to mantain because:
 *  - A developer can change something in a structure, but he can forget to increase the versioning thus leading to
 *    problems if this reach production without noticing.
 *  - A developer can incrase the version without making ABI changes thus not affecting users using older versions.
 *  - Deprication is going to be a pain.
 *
 * Beucase of these the API version is increased only if we do incompatible ABI changes, all other changes must be
 * backward compatible.
 */

#define RED4EXT_API_VERSION_1 1
#define RED4EXT_API_VERSION_LATEST RED4EXT_API_VERSION_1

namespace RED4ext
{
/**
 * @brief The latest RED4ext interface.
 */
using IRED4ext = v1::IRED4ext;

/**
 * @brief The latest plugin info type.
 */
using PluginInfo = v1::PluginInfo;

/**
 * @brief The latest plugin handle type.
 */
using PluginHandle = v1::PluginHandle;

/**
 * @brief The latest version info type.
 */
using VersionInfo = v1::VersionInfo;
} // namespace RED4ext
