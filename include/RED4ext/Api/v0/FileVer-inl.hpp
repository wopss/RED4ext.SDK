#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/Api/v0/FileVer.hpp>
#endif

#include <RED4ext/Common.hpp>
#include <sstream>

RED4EXT_INLINE RED4ext::v0::FileVer RED4ext::v0::CreateFileVer(uint16_t aMajor, uint16_t aMinor, uint16_t aBuild,
                                                               uint16_t aRevision)
{
    FileVer version{};
    version.major = aMajor;
    version.minor = aMinor;
    version.build = aBuild;
    version.revision = aRevision;

    return version;
}

RED4EXT_INLINE int32_t RED4ext::v0::CompareFileVer(const RED4ext::v0::FileVer& aLhs, const RED4ext::v0::FileVer& aRhs)
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

RED4EXT_INLINE std::wstring std::to_wstring(const RED4ext::v0::FileVer& aVersion)
{
    std::wstringstream stream;
    stream << aVersion.major << L"." << aVersion.minor << L"." << aVersion.build << L"." << aVersion.revision;

    return stream.str();
}
