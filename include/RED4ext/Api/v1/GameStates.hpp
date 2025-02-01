#pragma once

#include <RED4ext/Api/PluginHandle.hpp>
#include <RED4ext/Api/v1/GameState.hpp>

namespace RED4ext
{
enum class EGameStateType : uint32_t;

namespace v1
{
struct GameStates
{
    /**
     * @brief Add a custom game state hook.
     *
     * @param[in] aHandle    The plugin's handle.
     * @param[in] aType      The type of the state to hook.
     * @param[in] aState     Hooks for the state. Can be allocated on stack.
     *
     * @return true if the state hook is added successfully, false otherwise.
     */
    bool (*AddHook)(PluginHandle aHandle, EGameStateType aType, GameState* aState);
};
} // namespace v1
} // namespace RED4ext
