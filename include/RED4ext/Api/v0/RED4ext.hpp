#pragma once

#include <RED4ext/Api/v0/GameState.hpp>
#include <RED4ext/Api/v0/Hooking.hpp>
#include <RED4ext/Api/v0/VersionInfo.hpp>

namespace RED4ext
{
enum class EGameStateType : uint32_t;

namespace v0
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

    bool (*AddState)(PluginHandle aHandle, EGameStateType aType, GameState* aState);
};
} // namespace v0
} // namespace RED4ext
