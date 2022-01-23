#pragma once

#include <RED4ext/Api/PluginHandle.hpp>
#include <RED4ext/Api/v0/GameState.hpp>

namespace RED4ext
{
enum class EGameStateType : uint32_t;

namespace v0
{
struct GameStates
{
    /**
     * @brief Add a custom game state.
     *
     * @param[in] aHandle   The plugin's handle.
     * @param[in] aType     The type of the state.
     * @param[in] aState    The state. Can be allocated on stack.
     *
     * @return true if the state is added successfully, false otherwise.
     */
    bool (*Add)(PluginHandle aHandle, EGameStateType aType, GameState* aState);
};
} // namespace v0
} // namespace RED4ext
