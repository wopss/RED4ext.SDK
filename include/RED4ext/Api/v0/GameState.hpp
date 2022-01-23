#pragma once

namespace RED4ext
{
struct CGameApplication;

namespace v0
{
struct GameState
{
    /**
     * @brief The function that is called when the state is actived.
     *
     * @param[in] aApp The game application.
     *
     * @return Always return true.
     * @note The return result do not matter for this event, always return "true" here.
     */
    bool (*OnEnter)(CGameApplication* aApp);

    /**
     * @brief The function that is called when the state is updated.
     *
     * @param[in] aApp The game application.
     *
     * @return true if the state is done updating, false otherwise.
     * @note Returning true will prevent the update function from being called, returning false will keep calling the
     *       function until it returns true. When this function is called from "Running" the return result will not
     *       matter.
     */
    bool (*OnUpdate)(CGameApplication* aApp);

    /**
     * @brief The function that is called when the state is done.
     *
     * @param[in] aApp The game application.
     *
     * @return Always return true.
     * @note The return result do not matter for this event, always return "true" here.
     */
    bool (*OnExit)(CGameApplication* aApp);
};
} // namespace v0
} // namespace RED4ext
