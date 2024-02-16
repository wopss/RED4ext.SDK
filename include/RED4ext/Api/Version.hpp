#pragma once

#include <RED4ext/Api/v0/Version.hpp>

/*
 * The SDK is using only one API version, the reason behind that is that multiple versions for every structure is
 * going to be a pain to mantain because:
 *  - A developer can change something in a structure, but he can forget to increase the versioning thus leading to
 *    problems if this reach production without noticing.
 *  - A developer can increase the version without making ABI changes thus not affecting users using older versions.
 *  - Deprecation is going to be a pain.
 *
 * Beucase of these the API version is increased only if we do incompatible ABI changes, all other changes must be
 * backward compatible.
 */

#define RED4EXT_API_VERSION_0 0
#define RED4EXT_API_VERSION_LATEST RED4EXT_API_VERSION_0

/*
 * The SDK version, it is maninly used to reject loading plugin that are using a broken SDK version, while API version
 * is 0, it is used to load only plugins using the latest SDK version.
 */

#define RED4EXT_SDK_0_1_0 RED4EXT_V0_SDK_0_1_0
#define RED4EXT_SDK_0_2_0 RED4EXT_V0_SDK_0_2_0
#define RED4EXT_SDK_0_3_0 RED4EXT_V0_SDK_0_3_0
#define RED4EXT_SDK_0_4_0 RED4EXT_V0_SDK_0_4_0
#define RED4EXT_SDK_0_5_0 RED4EXT_V0_SDK_0_5_0

#define RED4EXT_SDK_LATEST RED4EXT_V0_SDK_LATEST
