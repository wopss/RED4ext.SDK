#pragma once

#include <RED4ext/Api/v0/GameState.hpp>
#include <RED4ext/Api/v0/Hooking.hpp>

namespace RED4ext
{
enum class EGameStateType : uint32_t;

namespace v0
{
struct Sdk
{
    /**
     * @brief Get the game's version.
     */
    VersionInfo runtime;

    /**
     * @brief Get the hooking struct.
     */
    Hooking hooking;

    /**
     * @brief Add a custom game state.
     *
     * @param[in] aHandle   The plugin's handle.
     * @param[in] aType     The type of the state.
     * @param[in] aState    The state. Can be allocated on stack.
     *
     * @return true if the state is added successfully, false otherwise.
     */
    bool (*AddState)(PluginHandle aHandle, EGameStateType aType, GameState* aState);
};
} // namespace v0
} // namespace RED4ext

