#pragma once

namespace RED4ext
{
struct CGameApplication;

namespace v1
{
/**
 * @brief Result type for game state hooks.
 */
enum class EGameStateResult : uint8_t
{
    Running,  /**< Hook has not yet finished. Until the state changes, hook continues to operate. */
    Finished, /**< Hook has finished. When signaled, hook is detached. */
    Observing /**< Hook is observing, not running a task. Hook won't get detached until shutdown. */
};

struct GameState
{
    /**
     * @brief The function that is called when the state is actived, before original function call.
     *
     * @param[in] aApp The game application.
     *
     * @return EGameStateResult specifying the state of the hook after it ran. See its documentation for possible
     * values.
     */
    EGameStateResult (*OnBeforeEnter)(CGameApplication& aApp);

    /**
     * @brief The function that is called when the state is actived, after original function call.
     *
     * @param[in] aApp The game application.
     *
     * @return EGameStateResult specifying the state of the hook after it ran. See its documentation for possible
     * values.
     */
    EGameStateResult (*OnAfterEnter)(CGameApplication& aApp);

    /**
     * @brief The function that is called when the state is updated, before original function call.
     *
     * @param[in] aApp The game application.
     *
     * @return EGameStateResult specifying the state of the hook after it ran. See its documentation for possible
     * values.
     */
    EGameStateResult (*OnBeforeTick)(CGameApplication& aApp);

    /**
     * @brief The function that is called when the state is updated, after original function call.
     *
     * @param[in] aApp The game application.
     *
     * @return EGameStateResult specifying the state of the hook after it ran. See its documentation for possible
     * values.
     */
    EGameStateResult (*OnAfterTick)(CGameApplication& aApp);

    /**
     * @brief The function that is called when the state is done, before original function call.
     *
     * @param[in] aApp The game application.
     *
     * @return EGameStateResult specifying the state of the hook after it ran. See its documentation for possible
     * values.
     */
    EGameStateResult (*OnBeforeExit)(CGameApplication& aApp);

    /**
     * @brief The function that is called when the state is done, after original function call.
     *
     * @param[in] aApp The game application.
     *
     * @return EGameStateResult specifying the state of the hook after it ran. See its documentation for possible
     * values.
     */
    EGameStateResult (*OnAfterExit)(CGameApplication& aApp);
};
} // namespace v1
} // namespace RED4ext
