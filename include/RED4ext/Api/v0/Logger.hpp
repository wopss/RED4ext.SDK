#pragma once

#include <RED4ext/Api/PluginHandle.hpp>

namespace RED4ext::v0
{
struct Logger
{
    void (*Trace)(PluginHandle aHandle, const char* aMessage);
    void (*TraceF)(PluginHandle aHandle, const char* aFormat, ...);

    void (*TraceW)(PluginHandle aHandle, const wchar_t* aMessage);
    void (*TraceWF)(PluginHandle aHandle, const wchar_t* aFormat, ...);

    void (*Debug)(PluginHandle aHandle, const char* aMessage);
    void (*DebugF)(PluginHandle aHandle, const char* aFormat, ...);

    void (*DebugW)(PluginHandle aHandle, const wchar_t* aMessage);
    void (*DebugWF)(PluginHandle aHandle, const wchar_t* aFormat, ...);

    void (*Info)(PluginHandle aHandle, const char* aMessage);
    void (*InfoF)(PluginHandle aHandle, const char* aFormat, ...);

    void (*InfoW)(PluginHandle aHandle, const wchar_t* aMessage);
    void (*InfoWF)(PluginHandle aHandle, const wchar_t* aFormat, ...);

    void (*Warn)(PluginHandle aHandle, const char* aMessage);
    void (*WarnF)(PluginHandle aHandle, const char* aFormat, ...);

    void (*WarnW)(PluginHandle aHandle, const wchar_t* aMessage);
    void (*WarnWF)(PluginHandle aHandle, const wchar_t* aFormat, ...);

    void (*Error)(PluginHandle aHandle, const char* aMessage);
    void (*ErrorF)(PluginHandle aHandle, const char* aFormat, ...);

    void (*ErrorW)(PluginHandle aHandle, const wchar_t* aMessage);
    void (*ErrorWF)(PluginHandle aHandle, const wchar_t* aFormat, ...);

    void (*Critical)(PluginHandle aHandle, const char* aMessage);
    void (*CriticalF)(PluginHandle aHandle, const char* aFormat, ...);

    void (*CriticalW)(PluginHandle aHandle, const wchar_t* aMessage);
    void (*CriticalWF)(PluginHandle aHandle, const wchar_t* aFormat, ...);
};
} // namespace RED4ext::v0
