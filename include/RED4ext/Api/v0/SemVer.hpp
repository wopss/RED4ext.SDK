#pragma once

#include <cstdint>
#include <string>

#include <RED4ext/Common.hpp>

namespace RED4ext::v0
{
struct SemVer
{
    struct PrereleaseInfo
    {
        uint32_t type;
        uint32_t number;
    };

    uint8_t major;
    uint16_t minor;
    uint32_t patch;
    PrereleaseInfo prerelease;
};

SemVer CreateSemVer(uint8_t aMajor, uint16_t aMinor, uint32_t aPatch, uint32_t prereleaseType,
                    uint32_t prereleaseNumber);

/**
 * @brief Compare two semantic versions.
 * @param aLhs The lhs version.
 * @param aRhs The rhs version.
 * @return < 0 if lhs is lower than rhs, 0 if they are equal, > 0 if lhs is greater than lhs.
 */
int32_t CompareSemVer(const RED4ext::v0::SemVer& aLhs, const RED4ext::v0::SemVer& aRhs);

/**
 * @brief Compare two pre-release semantic versions.
 * @param aLhs The lhs pre-release.
 * @param aRhs The rhs pre-release.
 * @return < 0 if lhs is lower than rhs, 0 if they are equal, > 0 if lhs is greater than lhs.
 */
int32_t CompareSemVerPrerelease(const RED4ext::v0::SemVer::PrereleaseInfo& aLhs,
                                const RED4ext::v0::SemVer::PrereleaseInfo& aRhs);
} // namespace RED4ext::v0

// clang-format off
#define RED4EXT_V0_SEMVER_PRERELEASE_TYPE_NONE     0ul
#define RED4EXT_V0_SEMVER_PRERELEASE_TYPE_ALPHA    1ul
#define RED4EXT_V0_SEMVER_PRERELEASE_TYPE_BETA     2ul
#define RED4EXT_V0_SEMVER_PRERELEASE_TYPE_RC       3ul
// clang-format on

#define RED4EXT_V0_SEMVER_EX(major, minor, patch, prereleaseType, prereleaseNumber)                                    \
    RED4ext::v0::CreateSemVer(major, minor, patch, prereleaseType, prereleaseNumber)

#define RED4EXT_V0_SEMVER(major, minor, patch)                                                                         \
    RED4EXT_V0_SEMVER_EX(major, minor, patch, RED4EXT_V0_SEMVER_PRERELEASE_TYPE_NONE, 0)

#ifdef __cplusplus
namespace std
{
std::wstring to_wstring(const RED4ext::v0::SemVer& aVersion);
} // namespace std
#endif

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/Api/v0/SemVer-inl.hpp>
#endif

#ifdef __cplusplus
#pragma region PrereleaseInfo operators
inline bool operator<(const RED4ext::v0::SemVer::PrereleaseInfo& aLhs, const RED4ext::v0::SemVer::PrereleaseInfo& aRhs)
{
    return RED4ext::v0::CompareSemVerPrerelease(aLhs, aRhs) < 0;
}

inline bool operator<=(const RED4ext::v0::SemVer::PrereleaseInfo& aLhs, const RED4ext::v0::SemVer::PrereleaseInfo& aRhs)
{
    return RED4ext::v0::CompareSemVerPrerelease(aLhs, aRhs) <= 0;
}

inline bool operator>(const RED4ext::v0::SemVer::PrereleaseInfo& aLhs, const RED4ext::v0::SemVer::PrereleaseInfo& aRhs)
{
    return RED4ext::v0::CompareSemVerPrerelease(aLhs, aRhs) > 0;
}

inline bool operator>=(const RED4ext::v0::SemVer::PrereleaseInfo& aLhs, const RED4ext::v0::SemVer::PrereleaseInfo& aRhs)
{
    return RED4ext::v0::CompareSemVerPrerelease(aLhs, aRhs) >= 0;
}

inline bool operator==(const RED4ext::v0::SemVer::PrereleaseInfo& aLhs, const RED4ext::v0::SemVer::PrereleaseInfo& aRhs)
{
    return RED4ext::v0::CompareSemVerPrerelease(aLhs, aRhs) == 0;
}

inline bool operator!=(const RED4ext::v0::SemVer::PrereleaseInfo& aLhs, const RED4ext::v0::SemVer::PrereleaseInfo& aRhs)
{
    return RED4ext::v0::CompareSemVerPrerelease(aLhs, aRhs) != 0;
}
#pragma endregion

#pragma region VersionInfo operators
inline bool operator<(const RED4ext::v0::SemVer& aLhs, const RED4ext::v0::SemVer& aRhs)
{
    return RED4ext::v0::CompareSemVer(aLhs, aRhs) < 0;
}

inline bool operator<=(const RED4ext::v0::SemVer& aLhs, const RED4ext::v0::SemVer& aRhs)
{
    return RED4ext::v0::CompareSemVer(aLhs, aRhs) <= 0;
}

inline bool operator>(const RED4ext::v0::SemVer& aLhs, const RED4ext::v0::SemVer& aRhs)
{
    return RED4ext::v0::CompareSemVer(aLhs, aRhs) > 0;
}

inline bool operator>=(const RED4ext::v0::SemVer& aLhs, const RED4ext::v0::SemVer& aRhs)
{
    return RED4ext::v0::CompareSemVer(aLhs, aRhs) >= 0;
}

inline bool operator==(const RED4ext::v0::SemVer& aLhs, const RED4ext::v0::SemVer& aRhs)
{
    return RED4ext::v0::CompareSemVer(aLhs, aRhs) == 0;
}

inline bool operator!=(const RED4ext::v0::SemVer& aLhs, const RED4ext::v0::SemVer& aRhs)
{
    return RED4ext::v0::CompareSemVer(aLhs, aRhs) != 0;
}
#pragma endregion
#endif
