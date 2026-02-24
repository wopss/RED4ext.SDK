#pragma once

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

#define RED4EXT_API_VERSION_1 1

/**
 * @brief Compatibility macro for API version 0.
 *
 * @deprecated Use `RED4EXT_API_VERSION_1`. Maintained for compatibility with older loaders and may be removed in a
 * future release.
 *
 * @note Since API v0 and v1 are fully compatible, this macro allows plugins to report themselves as using API v0. This
 * ensures they can still be loaded by older loaders that do not recognize API v1.
 */
#define RED4EXT_API_VERSION_1_COMPAT_0 0
