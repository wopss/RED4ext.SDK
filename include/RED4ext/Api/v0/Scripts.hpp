#pragma once

#include <RED4ext/Api/PluginHandle.hpp>
#include <filesystem>

namespace RED4ext::v0
{
struct Scripts
{
    /**
     * @brief Add a script path to the redscript compilation.
     *
     * @param[in]   aHandle     The plugin's handle.
     * @param[in]   aPath       The path to be added to the redscript compilation - can be a folder or a .reds file
     *
     * @return Returns true if the path was added, false otherwise.
     */
    bool (*Add)(PluginHandle aHandle, const wchar_t* aPath);

    /**
     * @brief Register a type as being @neverRef, i.e. a type that shouldn't be stored behind
     * a reference in scripts.
     *
     * @param[in]   aType       The type to be registered.
     *
     * @return Returns true if the type was registered successfully, false otherwise.
     */
    bool (*RegisterNeverRefType)(const char* aType);

    /**
     * @brief Register a type as being @mixedRef, i.e. a type that can be stored behind a reference
     * in scripts, but also can be used as a value.
     *
     * @param[in]   aType       The type to be registered.
     *
     * @return Returns true if the type was registered successfully, false otherwise.
     */
    bool (*RegisterMixedRefType)(const char* aType);
};
} // namespace RED4ext::v0
