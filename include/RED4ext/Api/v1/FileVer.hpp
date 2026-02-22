#pragma once

#include <cstdint>
#include <string>

namespace RED4ext::v1
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
int32_t CompareFileVer(const RED4ext::v1::FileVer& aLhs, const RED4ext::v1::FileVer& aRhs);
} // namespace RED4ext::v1

#define RED4EXT_V1_FILEVER(major, minor, build, revision) RED4ext::v1::CreateFileVer(major, minor, build, revision)

#ifdef __cplusplus
namespace std
{
std::wstring to_wstring(const RED4ext::v1::FileVer& aVersion);
} // namespace std
#endif

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/Api/v1/FileVer-inl.hpp>
#endif

#ifdef __cplusplus
inline bool operator<(const RED4ext::v1::FileVer& aLhs, const RED4ext::v1::FileVer& aRhs)
{
    return RED4ext::v1::CompareFileVer(aLhs, aRhs) < 0;
}

inline bool operator<=(const RED4ext::v1::FileVer& aLhs, const RED4ext::v1::FileVer& aRhs)
{
    return RED4ext::v1::CompareFileVer(aLhs, aRhs) <= 0;
}

inline bool operator>(const RED4ext::v1::FileVer& aLhs, const RED4ext::v1::FileVer& aRhs)
{
    return RED4ext::v1::CompareFileVer(aLhs, aRhs) > 0;
}

inline bool operator>=(const RED4ext::v1::FileVer& aLhs, const RED4ext::v1::FileVer& aRhs)
{
    return RED4ext::v1::CompareFileVer(aLhs, aRhs) >= 0;
}

inline bool operator==(const RED4ext::v1::FileVer& aLhs, const RED4ext::v1::FileVer& aRhs)
{
    return RED4ext::v1::CompareFileVer(aLhs, aRhs) == 0;
}

inline bool operator!=(const RED4ext::v1::FileVer& aLhs, const RED4ext::v1::FileVer& aRhs)
{
    return RED4ext::v1::CompareFileVer(aLhs, aRhs) != 0;
}
#endif
