#pragma once

#include <RED4ext/Api/PluginHandle.hpp>

namespace RED4ext::v0
{
struct ITrampoline
{
    /**
     * @brief Allocate a trampoline of 256 bytes.
     * @param aHandle[in] The plugin's identifier.
     * @return A pointer to the trampoline or NULL if the trampoline could not be allocated.
     */
    void* (*Alloc)(PluginHandle aHandle);

    /**
     * @brief Frees the trampoline.
     * @param aHandle[in]   The plugin's identifier.
     * @param aAddress[in]  The trampoline's address.
     */
    void (*Free)(PluginHandle aHandle, void* aAddress);
};
} // namespace RED4ext::v0
