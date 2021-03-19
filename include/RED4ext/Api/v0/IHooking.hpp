#pragma once

#include <RED4ext/Api/PluginHandle.hpp>

namespace RED4ext::v0
{
struct IHooking
{
    /**
     * @brief Create a new hook.
     * @param[in] aHandle       The plugin's handle.
     * @param[in] aTarget       The address of the function that will be hooked.
     * @param[in] aDetour       The address of the callback.
     * @param[out] aOriginal    A pointer to the trampoline function, will be used to call the original function.
     *                          This can be NULL.
     */
    void (*Create)(PluginHandle aHandle, void* aTarget, void* aDetour, void** aOriginal);

    /**
     * @brief Remove a hook.
     * @param[in] aHandle   The plugin's handle.
     * @param[in] aTarget   The address of the function that was hooked.
     */
    void (*Remove)(PluginHandle aHandle, void* aTarget);

    /**
     * @brief Attach a hook.
     * @param[in] aHandle       The plugin's handle.
     * @param[in] aTarget       The address of the function that should be attached.
     */
    bool (*Attach)(PluginHandle aHandle, void* aTarget);

    /**
     * @brief Detach a hook.
     * @param[in] aHandle       The plugin's handle.
     * @param[in] aTarget       The address of the function that should be detached.
     */
    bool (*Detach)(PluginHandle aHandle, void* aTarget);

    /**
     * @brief Find a pattern.
     * @param[in] aPattern          The pattern.
     * @param[in] aPatternSize      The #pattern's size.
     * @param[in] aWildcard         The wildcard.
     * @param[in] aExpectedMatches  The expected matches.
     * @param[in] aIndex            The index of the address in matches, starting from 0.
     * @return The address of the match or NULL if not found.
     */
    void* (*FindPattern)(uint8_t* aPattern, size_t aPatternSize, uint8_t aWildcard, size_t aExpectedMatches,
                         size_t aIndex);
};
} // namespace RED4ext::v0
