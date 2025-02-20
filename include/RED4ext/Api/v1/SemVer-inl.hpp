#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/Api/v1/SemVer.hpp>
#endif

#include <RED4ext/Common.hpp>

#include <sstream>

namespace RED4ext::v1
{
RED4EXT_INLINE SemVer CreateSemVer(uint8_t aMajor, uint16_t aMinor, uint32_t aPatch, uint32_t aPrereleaseType,
                                   uint32_t aPrereleaseNumber)
{
    return {.major = aMajor,
            .minor = aMinor,
            .patch = aPatch,
            .prerelease = {.type = aPrereleaseType, .number = aPrereleaseNumber}};
}

RED4EXT_INLINE int32_t CompareSemVer(const SemVer& aLhs, const SemVer& aRhs)
{
    if (aLhs.major != aRhs.major)
    {
        return aLhs.major - aRhs.major;
    }
    else if (aLhs.minor != aRhs.minor)
    {
        return aLhs.minor - aRhs.minor;
    }
    else if (aLhs.patch != aRhs.patch)
    {
        return aLhs.patch - aRhs.patch;
    }

    return CompareSemVerPrerelease(aLhs.prerelease, aRhs.prerelease);
}

RED4EXT_INLINE int32_t CompareSemVerPrerelease(const SemVer::PrereleaseInfo& aLhs, const SemVer::PrereleaseInfo& aRhs)
{
    if (aLhs.type != aRhs.type)
    {
        return aLhs.type - aRhs.type;
    }
    else if (aLhs.number != aRhs.number)
    {
        return aLhs.number - aRhs.number;
    }

    return 0;
}
} // namespace RED4ext::v1

namespace std
{
RED4EXT_INLINE wstring to_wstring(const RED4ext::v1::SemVer& aVersion)
{
    wstringstream stream;
    stream << aVersion.major << L"." << aVersion.minor << L"." << aVersion.patch;

    if (aVersion.prerelease.type != RED4EXT_V1_SEMVER_PRERELEASE_TYPE_NONE)
    {
        stream << L"-";
        switch (aVersion.prerelease.type)
        {
        case RED4EXT_V1_SEMVER_PRERELEASE_TYPE_ALPHA:
        {
            stream << L"alpha";
            break;
        }
        case RED4EXT_V1_SEMVER_PRERELEASE_TYPE_BETA:
        {
            stream << L"beta";
            break;
        }
        case RED4EXT_V1_SEMVER_PRERELEASE_TYPE_RC:
        {
            stream << L"rc";
            break;
        }
        default:
        {
            stream << L"unknown";
            break;
        }
        }

        stream << L"." << aVersion.prerelease.number;
    }

    return stream.str();
}
} // namespace std
