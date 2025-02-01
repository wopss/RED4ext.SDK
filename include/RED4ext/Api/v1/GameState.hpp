#pragma once

namespace RED4ext
{
struct CGameApplication;

namespace v1
{
struct GameState
{
    /**
     * @brief The function that is called when the state is actived, before original function call.
     *
     * @param[in] aApp The game application.
     *
     * @return Always return true.
     * @note The return result do not matter for this event, always return "true" here.
     */
    bool (*OnBeforeEnter)(CGameApplication* aApp);

    /**
     * @brief The function that is called when the state is actived, after original function call.
     *
     * @param[in] aApp The game application.
     *
     * @return Always return true.
     * @note The return result do not matter for this event, always return "true" here.
     */
    bool (*OnAfterEnter)(CGameApplication* aApp);

    /**
     * @brief The function that is called when the state is updated, before original function call.
     *
     * @param[in] aApp The game application.
     *
     * @return true if the state is done updating, false otherwise.
     * @note Returning true will prevent the update function from being called, returning false will keep calling the
     *       function until it returns true. When this function is not called from "Running" the return result will not
     *       matter as the function will get called only once either way.
     */
    bool (*OnBeforeTick)(CGameApplication* aApp);

    /**
     * @brief The function that is called when the state is updated, after original function call.
     *
     * @param[in] aApp The game application.
     *
     * @return true if the state is done updating, false otherwise.
     * @note Returning true will prevent the update function from being called, returning false will keep calling the
     *       function until it returns true. When this function is not called from "Running" the return result will not
     *       matter as the function will get called only once either way.
     */
    bool (*OnAfterTick)(CGameApplication* aApp);

    /**
     * @brief The function that is called when the state is done, before original function call.
     *
     * @param[in] aApp The game application.
     *
     * @return Always return true.
     * @note The return result do not matter for this event, always return "true" here.
     */
    bool (*OnBeforeExit)(CGameApplication* aApp);

    /**
     * @brief The function that is called when the state is done, after original function call.
     *
     * @param[in] aApp The game application.
     *
     * @return Always return true.
     * @note The return result do not matter for this event, always return "true" here.
     */
    bool (*OnAfterExit)(CGameApplication* aApp);
};
} // namespace v1
} // namespace RED4ext
