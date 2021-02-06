#pragma once

#include <Windows.h>

#include <RED4ext/Api/v1/VersionInfo.hpp>

namespace RED4ext::v1
{
struct PluginInfo
{
    /**
     * @brief The name of the plugin.
    */
    const wchar_t* name;

    /**
     * @brief The author(s) of the plugin.
    */
    const wchar_t* author;

    /**
     * @brief The version of the plugin.
    */
    VersionInfo version;

    /**
     * @brief The supported game's version of the plugin.
     * @note If you are using RED4ext only as a loader, use 'RED4EXT_V1_RUNTIME_INDEPENDENT'.
    */
    VersionInfo runtime;
};

using PluginHandle = HMODULE;
} // namespace RED4ext::v1
