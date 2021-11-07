#pragma once

#include <RED4ext/Api/v0/Hooking.hpp>
#include <RED4ext/Api/v0/VersionInfo.hpp>

namespace RED4ext::v0
{
struct RED4ext
{
    /**
     * @brief Get the game's version.
     */
    VersionInfo runtime;

    /**
     * @brief Get the hooking struct.
     */
    Hooking hooking;
};
} // namespace RED4ext::v0
