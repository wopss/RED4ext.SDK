#pragma once

/*
 * The SDK is using only one version, the reason behind that is that multiple versions for every structure is
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
