#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/Api/v0/SemVer.hpp>
#endif

#include <RED4ext/Common.hpp>
#include <sstream>

RED4EXT_INLINE RED4ext::v0::SemVer RED4ext::v0::CreateSemVer(uint8_t aMajor, uint16_t aMinor, uint32_t aPatch,
                                                             uint32_t aPrereleaseType, uint32_t aPrereleaseNumber)
{
    SemVer version{};
    version.major = aMajor;
    version.minor = aMinor;
    version.patch = aPatch;
    version.prerelease.type = aPrereleaseType;
    version.prerelease.number = aPrereleaseNumber;

    return version;
}

RED4EXT_INLINE int32_t RED4ext::v0::CompareSemVer(const RED4ext::v0::SemVer& aLhs, const RED4ext::v0::SemVer& aRhs)
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

RED4EXT_INLINE int32_t RED4ext::v0::CompareSemVerPrerelease(const RED4ext::v0::SemVer::PrereleaseInfo& aLhs,
                                                            const RED4ext::v0::SemVer::PrereleaseInfo& aRhs)
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

RED4EXT_INLINE std::wstring std::to_wstring(const RED4ext::v0::SemVer& aVersion)
{
    std::wstringstream stream;
    stream << aVersion.major << L"." << aVersion.minor << L"." << aVersion.patch;

    if (aVersion.prerelease.type != RED4EXT_V0_SEMVER_PRERELEASE_TYPE_NONE)
    {
        stream << L"-";
        switch (aVersion.prerelease.type)
        {
        case RED4EXT_V0_SEMVER_PRERELEASE_TYPE_ALPHA:
        {
            stream << L"alpha";
            break;
        }
        case RED4EXT_V0_SEMVER_PRERELEASE_TYPE_BETA:
        {
            stream << L"beta";
            break;
        }
        case RED4EXT_V0_SEMVER_PRERELEASE_TYPE_RC:
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
