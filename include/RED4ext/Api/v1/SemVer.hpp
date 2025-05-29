#pragma once

#include <RED4ext/Common.hpp>

#include <cstdint>
#include <string>

namespace RED4ext::v1
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
int32_t CompareSemVer(const RED4ext::v1::SemVer& aLhs, const RED4ext::v1::SemVer& aRhs);

/**
 * @brief Compare two pre-release semantic versions.
 * @param aLhs The lhs pre-release.
 * @param aRhs The rhs pre-release.
 * @return < 0 if lhs is lower than rhs, 0 if they are equal, > 0 if lhs is greater than lhs.
 */
int32_t CompareSemVerPrerelease(const RED4ext::v1::SemVer::PrereleaseInfo& aLhs,
                                const RED4ext::v1::SemVer::PrereleaseInfo& aRhs);
} // namespace RED4ext::v1

// clang-format off
#define RED4EXT_V1_SEMVER_PRERELEASE_TYPE_NONE     0ul
#define RED4EXT_V1_SEMVER_PRERELEASE_TYPE_ALPHA    1ul
#define RED4EXT_V1_SEMVER_PRERELEASE_TYPE_BETA     2ul
#define RED4EXT_V1_SEMVER_PRERELEASE_TYPE_RC       3ul
// clang-format on

#define RED4EXT_V1_SEMVER_EX(major, minor, patch, prereleaseType, prereleaseNumber)                                    \
    RED4ext::v1::CreateSemVer(major, minor, patch, prereleaseType, prereleaseNumber)

#define RED4EXT_V1_SEMVER(major, minor, patch)                                                                         \
    RED4EXT_V1_SEMVER_EX(major, minor, patch, RED4EXT_V1_SEMVER_PRERELEASE_TYPE_NONE, 0)

namespace std
{
std::wstring to_wstring(const RED4ext::v1::SemVer& aVersion);
} // namespace std

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/Api/v1/SemVer-inl.hpp>
#endif

#pragma region PrereleaseInfo operators
inline bool operator<(const RED4ext::v1::SemVer::PrereleaseInfo& aLhs, const RED4ext::v1::SemVer::PrereleaseInfo& aRhs)
{
    return RED4ext::v1::CompareSemVerPrerelease(aLhs, aRhs) < 0;
}

inline bool operator<=(const RED4ext::v1::SemVer::PrereleaseInfo& aLhs, const RED4ext::v1::SemVer::PrereleaseInfo& aRhs)
{
    return RED4ext::v1::CompareSemVerPrerelease(aLhs, aRhs) <= 0;
}

inline bool operator>(const RED4ext::v1::SemVer::PrereleaseInfo& aLhs, const RED4ext::v1::SemVer::PrereleaseInfo& aRhs)
{
    return RED4ext::v1::CompareSemVerPrerelease(aLhs, aRhs) > 0;
}

inline bool operator>=(const RED4ext::v1::SemVer::PrereleaseInfo& aLhs, const RED4ext::v1::SemVer::PrereleaseInfo& aRhs)
{
    return RED4ext::v1::CompareSemVerPrerelease(aLhs, aRhs) >= 0;
}

inline bool operator==(const RED4ext::v1::SemVer::PrereleaseInfo& aLhs, const RED4ext::v1::SemVer::PrereleaseInfo& aRhs)
{
    return RED4ext::v1::CompareSemVerPrerelease(aLhs, aRhs) == 0;
}

inline bool operator!=(const RED4ext::v1::SemVer::PrereleaseInfo& aLhs, const RED4ext::v1::SemVer::PrereleaseInfo& aRhs)
{
    return RED4ext::v1::CompareSemVerPrerelease(aLhs, aRhs) != 0;
}
#pragma endregion

#pragma region VersionInfo operators
inline bool operator<(const RED4ext::v1::SemVer& aLhs, const RED4ext::v1::SemVer& aRhs)
{
    return RED4ext::v1::CompareSemVer(aLhs, aRhs) < 0;
}

inline bool operator<=(const RED4ext::v1::SemVer& aLhs, const RED4ext::v1::SemVer& aRhs)
{
    return RED4ext::v1::CompareSemVer(aLhs, aRhs) <= 0;
}

inline bool operator>(const RED4ext::v1::SemVer& aLhs, const RED4ext::v1::SemVer& aRhs)
{
    return RED4ext::v1::CompareSemVer(aLhs, aRhs) > 0;
}

inline bool operator>=(const RED4ext::v1::SemVer& aLhs, const RED4ext::v1::SemVer& aRhs)
{
    return RED4ext::v1::CompareSemVer(aLhs, aRhs) >= 0;
}

inline bool operator==(const RED4ext::v1::SemVer& aLhs, const RED4ext::v1::SemVer& aRhs)
{
    return RED4ext::v1::CompareSemVer(aLhs, aRhs) == 0;
}

inline bool operator!=(const RED4ext::v1::SemVer& aLhs, const RED4ext::v1::SemVer& aRhs)
{
    return RED4ext::v1::CompareSemVer(aLhs, aRhs) != 0;
}
#pragma endregion
