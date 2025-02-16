#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/Api/v1/FileVer.hpp>
#endif

#include <RED4ext/Common.hpp>
#include <sstream>

namespace RED4ext::v1
{
RED4EXT_INLINE FileVer CreateFileVer(uint16_t aMajor, uint16_t aMinor, uint16_t aBuild, uint16_t aRevision)
{
    return {.major = aMajor, .minor = aMinor, .build = aBuild, .revision = aRevision};
}

RED4EXT_INLINE int32_t CompareFileVer(const FileVer& aLhs, const FileVer& aRhs)
{
    if (aLhs.major != aRhs.major)
    {
        return aLhs.major - aRhs.major;
    }
    else if (aLhs.minor != aRhs.minor)
    {
        return aLhs.minor - aRhs.minor;
    }
    else if (aLhs.build != aRhs.build)
    {
        return aLhs.build - aRhs.build;
    }
    else if (aLhs.revision != aRhs.revision)
    {
        return aLhs.revision - aRhs.revision;
    }

    return 0;
}
} // namespace RED4ext::v1

namespace std
{
RED4EXT_INLINE std::wstring to_wstring(const RED4ext::v1::FileVer& aVersion)
{
    std::wstringstream stream;
    stream << aVersion.major << L"." << aVersion.minor << L"." << aVersion.build << L"." << aVersion.revision;

    return stream.str();
}
} // namespace std
