#pragma once

#include <RED4ext/Api/PluginHandle.hpp>
#include <RED4ext/Api/v1/Render.hpp>

namespace RED4ext
{
namespace v1
{
struct Rendering
{
    /**
     * @brief Add a custom rendering hook.
     *
     * @param[in] aHandle    The plugin's handle.
     * @param[in] aRender    Hooks for the rendering. Can be allocated on stack. Can leave out hooks for events that are
     * not interesting as NULL.
     *
     * @return True if the rendering hook is added successfully, false otherwise.
     */
    bool (*AddHook)(PluginHandle aHandle, const Render* aRender);
};
} // namespace v1
} // namespace RED4ext
