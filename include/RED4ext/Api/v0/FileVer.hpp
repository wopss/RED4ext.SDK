#pragma once

#include <cstdint>
#include <string>

namespace RED4ext::v0
{
struct FileVer
{
    uint16_t major;
    uint16_t minor;
    uint16_t build;
    uint16_t revision;
};

FileVer CreateFileVer(uint16_t aMajor, uint16_t aMinor, uint16_t aBuild, uint16_t aRevision);

/**
 * @brief Compare two file versions.
 * @param aLhs The lhs version.
 * @param aRhs The rhs version.
 * @return < 0 if lhs is lower than rhs, 0 if they are equal, > 0 if lhs is greater than lhs.
 */
int32_t CompareFileVer(const RED4ext::v0::FileVer& aLhs, const RED4ext::v0::FileVer& aRhs);
} // namespace RED4ext::v0

#define RED4EXT_V0_FILEVER(major, minor, build, revision) RED4ext::v0::CreateFileVer(major, minor, build, revision)

#ifdef __cplusplus
namespace std
{
std::wstring to_wstring(const RED4ext::v0::FileVer& aVersion);
} // namespace std
#endif

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/Api/v0/FileVer-inl.hpp>
#endif

#ifdef __cplusplus
inline bool operator<(const RED4ext::v0::FileVer& aLhs, const RED4ext::v0::FileVer& aRhs)
{
    return RED4ext::v0::CompareFileVer(aLhs, aRhs) < 0;
}

inline bool operator<=(const RED4ext::v0::FileVer& aLhs, const RED4ext::v0::FileVer& aRhs)
{
    return RED4ext::v0::CompareFileVer(aLhs, aRhs) <= 0;
}

inline bool operator>(const RED4ext::v0::FileVer& aLhs, const RED4ext::v0::FileVer& aRhs)
{
    return RED4ext::v0::CompareFileVer(aLhs, aRhs) > 0;
}

inline bool operator>=(const RED4ext::v0::FileVer& aLhs, const RED4ext::v0::FileVer& aRhs)
{
    return RED4ext::v0::CompareFileVer(aLhs, aRhs) >= 0;
}

inline bool operator==(const RED4ext::v0::FileVer& aLhs, const RED4ext::v0::FileVer& aRhs)
{
    return RED4ext::v0::CompareFileVer(aLhs, aRhs) == 0;
}

inline bool operator!=(const RED4ext::v0::FileVer& aLhs, const RED4ext::v0::FileVer& aRhs)
{
    return RED4ext::v0::CompareFileVer(aLhs, aRhs) != 0;
}
#endif
