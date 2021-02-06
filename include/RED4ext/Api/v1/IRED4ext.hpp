#pragma once

#include <RED4ext/Api/v1/VersionInfo.hpp>

namespace RED4ext::v1
{
struct IRED4ext
{
    /**
     * @brief Get the embedded SDK version.
     */
    const VersionInfo* (*GetSDKVersion)();

    /**
     * @brief Get the game's version.
     */
    const VersionInfo* (*GetRuntimeVersion)();
};
} // namespace RED4ext::v1
