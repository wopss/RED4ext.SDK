#pragma once

#include <filesystem>
#include <RED4ext/Api/PluginHandle.hpp>

namespace RED4ext::v0
{
struct Scripts
{
    /**
     * @brief Attach a hook.
     *
     * @param[in]   aHandle     The plugin's handle.
     * @param[in]   aPath       The path to be added to the redscript compilation - can be a folder or a .reds file
     *
     * @return Returns true if the path was added is attached, false otherwise.
     *
     * @example
     *
     * RED4EXT_C_EXPORT bool RED4EXT_CALL Main(RED4ext::PluginHandle aHandle, RED4ext::EMainReason aReason, const
     * RED4ext::RED4ext* aRED4ext)
     * {
     *     switch (aReason)
     *     {
     *     case RED4ext::EMainReason::Load:
     *     {
     *         aRED4ext->scripts->Add(aHandle, "my_mod.reds");
     *         break;
     *     }
     *     }
     *
     *     return true;
     * }
     */
    bool (*Add)(PluginHandle aHandle, std::filesystem::path aPath);
};
} // namespace RED4ext::v0
