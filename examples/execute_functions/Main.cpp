#include <iostream>

#include <RED4ext/RED4ext.hpp>
#include <RED4ext/Scripting/Natives/GameTime.hpp>

/*
 * To run this plugin you need to load it with RED4ext (https://github.com/WopsS/RED4ext).
 */

void PrintGameTime(RED4ext::IScriptable* aContext, RED4ext::CStackFrame* aFrame, void* aOut, int64_t a4)
{
    RED4ext::GameTime gameTime;
    RED4ext::ExecuteFunction("gameTimeSystem", "GetGameTime", &gameTime);

    std::cout << gameTime.ToString() << std::endl;
}

void ShiftGameTime(RED4ext::IScriptable* aContext, RED4ext::CStackFrame* aFrame, void* aOut, int64_t a4)
{
    RED4ext::GameTime gameTime;
    RED4ext::ExecuteFunction("gameTimeSystem", "GetGameTime", &gameTime);

    gameTime.AddHours(10);
    gameTime.AddMinutes(30);
    gameTime.AddSeconds(15);

    RED4ext::ExecuteFunction("gameTimeSystem", "SetGameTimeBySeconds", nullptr, gameTime.ToSeconds());
}

RED4EXT_C_EXPORT bool RED4EXT_CALL Load(RED4ext::PluginHandle aHandle, const RED4ext::IRED4ext* aInterface)
{
    auto rtti = RED4ext::CRTTISystem::Get();

    {
        auto func = RED4ext::CGlobalFunction::Create("PrintGameTime", "PrintGameTime", &PrintGameTime);
        rtti->RegisterFunction(func);
    }

    {
        auto func = RED4ext::CGlobalFunction::Create("ShiftGameTime", "ShiftGameTime", &ShiftGameTime);
        rtti->RegisterFunction(func);
    }

    return true;
}

RED4EXT_C_EXPORT void RED4EXT_CALL Query(RED4ext::PluginInfo* aInfo)
{
    aInfo->name = L"RED4ext.ExecuteFunctions";
    aInfo->author = L"WopsS";
    aInfo->version = RED4EXT_SEMVER(1, 0, 0);
    aInfo->runtime = RED4EXT_RUNTIME_LATEST;
    aInfo->sdk = RED4EXT_SDK_LATEST;
}

RED4EXT_C_EXPORT uint32_t RED4EXT_CALL Supports()
{
    return RED4EXT_API_VERSION_LATEST;
}
