#include <iostream>

#include <RED4ext/RED4ext.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/ScriptGameInstance.hpp>

/*
 * To run this plugin you need to load it with RED4ext (https://github.com/WopsS/RED4ext).
 */

void SummonVehiclePlease(RED4ext::IScriptable* aContext, RED4ext::CStackFrame* aFrame, void* aOut, int64_t a4)
{
    aFrame->code++; // skip ParamEnd

    // Retrieve global game instance
    RED4ext::ScriptGameInstance gameInstance;
    RED4ext::Handle<RED4ext::IScriptable> handle;
    // Get the player from the game instance
    RED4ext::ExecuteGlobalFunction("GetPlayer;GameInstance", &handle, gameInstance);

    if (handle)
    {
        auto rtti = RED4ext::CRTTISystem::Get();
        // Get the PlayerPuppet class
        auto playerPuppetCls = rtti->GetClass("PlayerPuppet");
        // Set up the GetQuickSlotsManager function on the PlayerPuppet class
        auto getQuickSlotsManagerFunc = playerPuppetCls->GetFunction("GetQuickSlotsManager");

        RED4ext::Handle<RED4ext::IScriptable> quickSlotManager;
        // Execute the function on our Player instance
        RED4ext::ExecuteFunction(handle, getQuickSlotsManagerFunc, &quickSlotManager, {});

        auto quickSlotsManagerCls = rtti->GetClass("QuickSlotsManager ");
        auto summonVehicleFunc = quickSlotsManagerCls->GetFunction("SummonVehicle");

        RED4ext::ExecuteFunction(quickSlotManager, summonVehicleFunc, nullptr, {});
    }
}

void CustomFunctionTwo(RED4ext::IScriptable* aContext, RED4ext::CStackFrame* aFrame, void* aOut, int64_t a4)
{
    float var_one;
    RED4ext::Vector4 var_two;

    RED4ext::GetParameter(aFrame, &var_one);
    RED4ext::GetParameter(aFrame, &var_two);

    aFrame->code++; // skip ParamEnd
}

RED4EXT_C_EXPORT void RED4EXT_CALL RegisterTypes()
{
}

RED4EXT_C_EXPORT void RED4EXT_CALL PostRegisterTypes()
{
    auto rtti = RED4ext::CRTTISystem::Get();
    RED4ext::CBaseFunction::Flags flags = { .isNative = true, .isStatic = true };

    {
        auto func = RED4ext::CGlobalFunction::Create("SummonVehiclePlease", "SummonVehiclePlease", &SummonVehiclePlease);
        func->flags = flags;
        rtti->RegisterFunction(func);
    }

    {
        auto func = RED4ext::CGlobalFunction::Create("CustomFunctionTwo", "CustomFunctionTwo", &CustomFunctionTwo);
        func->flags = flags;
        func->AddParam("Float", "var_one");
        func->AddParam("Vector4", "var_two");
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
    aInfo->name = L"RED4ext.NativeGlobalsRedscript";
    aInfo->author = L"Jack Humbert";
    aInfo->version = RED4EXT_SEMVER(1, 0, 0);
    aInfo->runtime = RED4EXT_RUNTIME_LATEST;
    aInfo->sdk = RED4EXT_SDK_LATEST;
}

RED4EXT_C_EXPORT uint32_t RED4EXT_CALL Supports()
{
    return RED4EXT_API_VERSION_LATEST;
}
