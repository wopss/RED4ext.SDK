#pragma once

#include <RED4ext/Api/PluginHandle.hpp>
#include <RED4ext/Api/v1/IHooking.hpp>
#include <RED4ext/Api/v1/ITrampoline.hpp>
#include <RED4ext/Api/v1/VersionInfo.hpp>

namespace RED4ext::v1
{
struct IRED4ext
{
    /**
     * @brief Get the embedded SDK version.
     * @return The embedded SDK version.
     */
    const VersionInfo* (*GetSDKVersion)(void);

    /**
     * @brief Get the game's version.
     * @return The embedded game's version.
     */
    const VersionInfo* (*GetRuntimeVersion)(void);

    /**
     * @brief Get interface for the specified plugin.
     * @param[in] aName The name of the plugin.
     * @return The plugin interface or NULL if the interface is not found.
     */
    void* (*GetInterface)(const wchar_t* aName);

    /**
     * @brief Register an interface for the plugin.
     * @param[in] aHandle       The plugin's handle.
     * @param[in] aInterface    A pointer to the interface.
     */
    void (*RegisterInterface)(PluginHandle aHandle, void* aInterface);

    /**
     * @brief Get the hooking interface.
     * @return The hooking interface.
     */
    const IHooking* (*GetHookingInterface)(void);

    /**
     * @brief Get the hooking interface.
     * @return The hooking interface.
     */
    const ITrampoline* (*GetTrampolineInterface)(void);
};
} // namespace RED4ext::v1
