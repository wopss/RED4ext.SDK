#include <iostream>

#include <RED4ext/RED4ext.hpp>
#include <RED4ext/Scripting/Natives/GameTime.hpp>
#include <RED4ext/Scripting/Natives/ScriptGameInstance.hpp>

/*
 * To run this plugin you need to load it with RED4ext (https://github.com/WopsS/RED4ext).
 */

void PrintGameTime(RED4ext::IScriptable* aContext, RED4ext::CStackFrame* aFrame, void* aOut, int64_t a4)
{
    /*
     * Access the property of 'GameTime' instance.
     */

    auto rtti = RED4ext::CRTTISystem::Get();
    auto gameTimeCls = rtti->GetClass("GameTime");

    RED4ext::GameTime gameTime;
    RED4ext::ExecuteFunction("gameTimeSystem", "GetGameTime", &gameTime);

    auto secondsProp = gameTimeCls->GetProperty("seconds");
    auto seconds = secondsProp->GetValue<uint32_t>(&gameTime);
    std::cout << "Seconds=" << seconds;

    seconds += RED4ext::GameTime::OneDay;

    secondsProp->SetValue<uint32_t>(&gameTime, seconds);
    std::cout << "Seconds=" << seconds;

    seconds = secondsProp->GetValue<uint32_t>(&gameTime);
    std::cout << "Seconds=" << seconds;
}

void IsPlayerCrouched(RED4ext::IScriptable* aContext, RED4ext::CStackFrame* aFrame, void* aOut, int64_t a4)
{
    /*
     * Check if the player is crouched.
     */
    RED4ext::ScriptGameInstance gameInstance;
    RED4ext::Handle<RED4ext::IScriptable> handle;
    RED4ext::ExecuteGlobalFunction("GetPlayer;GameInstance", &handle, gameInstance);

    if (handle)
    {
        auto rtti = RED4ext::CRTTISystem::Get();
        auto playerPuppetCls = rtti->GetClass("PlayerPuppet");
        auto inCrouch = playerPuppetCls->GetProperty("inCrouch");
        auto value = inCrouch->GetValue<bool>(handle.instance);

        std::cout << "inCourch=" << std::boolalpha << value;
    }
}

void DoSomethingWithUISystem(RED4ext::IScriptable* aContext, RED4ext::CStackFrame* aFrame, void* aOut, int64_t a4)
{
    RED4ext::ScriptGameInstance gameInstance;
    RED4ext::Handle<RED4ext::IScriptable> uiManager;
    RED4ext::ExecuteFunction("ScriptGameInstance", "GetUISystem", &uiManager, &gameInstance);
}

void PrintScannerStatus(RED4ext::IScriptable* aContext, RED4ext::CStackFrame* aFrame, void* aOut, int64_t a4)
{
    RED4ext::ScriptGameInstance gameInstance;
    RED4ext::Handle<RED4ext::IScriptable> handle;
    RED4ext::ExecuteGlobalFunction("GetPlayer;GameInstance", &handle, gameInstance);

    if (handle)
    {
        auto rtti = RED4ext::CRTTISystem::Get();
        auto playerPuppetCls = rtti->GetClass("PlayerPuppet");
        auto getHudManagerFunc = playerPuppetCls->GetFunction("GetHudManager");

        RED4ext::Handle<RED4ext::IScriptable> hudManager;
        RED4ext::ExecuteFunction(handle, getHudManagerFunc, &hudManager, {});

        auto hudManagerCls = rtti->GetClass("HUDManager");

        auto activeModeProp = hudManagerCls->GetProperty("activeMode");
        auto activeMode = activeModeProp->GetValue<int32_t>(hudManager);

        auto stateProp = hudManagerCls->GetProperty("state");
        auto state = stateProp->GetValue<int32_t>(hudManager);

        auto uiScannerVisibleProp = hudManagerCls->GetProperty("uiScannerVisible");
        auto uiScannerVisible = uiScannerVisibleProp->GetValue<bool>(hudManager);

        std::cout << std::boolalpha << "activeMode=" << activeMode << " state=" << state
                  << " uiScannerVisible=" << uiScannerVisible;
    }
}

RED4EXT_C_EXPORT void RED4EXT_CALL RegisterTypes()
{
}

RED4EXT_C_EXPORT void RED4EXT_CALL PostRegisterTypes()
{
    auto rtti = RED4ext::CRTTISystem::Get();

    {
        auto func = RED4ext::CGlobalFunction::Create("PrintGameTime", "PrintGameTime", &PrintGameTime);
        rtti->RegisterFunction(func);
    }

    {
        auto func = RED4ext::CGlobalFunction::Create("IsPlayerCrouched", "IsPlayerCrouched", &IsPlayerCrouched);
        rtti->RegisterFunction(func);
    }

    {
        auto func = RED4ext::CGlobalFunction::Create("DoSomethingWithUISystem", "DoSomethingWithUISystem",
                                                     &DoSomethingWithUISystem);
        rtti->RegisterFunction(func);
    }

    {
        auto func = RED4ext::CGlobalFunction::Create("PrintScannerStatus", "PrintScannerStatus", &PrintScannerStatus);
        rtti->RegisterFunction(func);
    }
}

RED4EXT_C_EXPORT bool RED4EXT_CALL Main(RED4ext::PluginHandle aHandle, RED4ext::EMainReason aReason,
                                        const RED4ext::Sdk* aSdk)
{
    switch (aReason)
    {
    case RED4ext::EMainReason::Load:
    {
        RED4ext::RTTIRegistrator::Add(RegisterTypes, PostRegisterTypes);
        break;
    }
    case RED4ext::EMainReason::Unload:
    {
        break;
    }
    }

    return true;
}

RED4EXT_C_EXPORT void RED4EXT_CALL Query(RED4ext::PluginInfo* aInfo)
{
    aInfo->name = L"RED4ext.AccessingProperties";
    aInfo->author = L"WopsS";
    aInfo->version = RED4EXT_SEMVER(1, 0, 0);
    aInfo->runtime = RED4EXT_RUNTIME_LATEST;
    aInfo->sdk = RED4EXT_SDK_LATEST;
}

RED4EXT_C_EXPORT uint32_t RED4EXT_CALL Supports()
{
    return RED4EXT_API_VERSION_LATEST;
}
