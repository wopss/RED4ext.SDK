#pragma once

#include <RED4ext/Api/PluginHandle.hpp>

namespace RED4ext::v0
{
struct Hooking
{
    /**
     * @brief Attach a hook.
     *
     * @param[in]   aHandle     The plugin's handle.
     * @param[in]   aTarget     The address of the function that will be hooked.
     * @param[in]   aDetour     The address of the callback.
     * @param[out]  aOriginal   A pointer to the trampoline function, will be used to call the original function. This
     * can be NULL.
     *
     * @retval Returns true if the hook is attached, false otherwise.
     */
    bool (*Attach)(PluginHandle aHandle, void* aTarget, void* aDetour, void** aOriginal);

    /**
     * @brief Detach all hooks at target.
     *
     * @param[in] aHandle   The plugin's handle.
     * @param[in] aTarget   The address of the function that was hooked.
     *
     * @return Returns true if all hooks were detached, false otherwise.
     */
    bool (*Detach)(PluginHandle aHandle, void* aTarget);
};
} // namespace RED4ext::v0
