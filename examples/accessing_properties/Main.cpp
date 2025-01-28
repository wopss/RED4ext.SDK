#include <iostream>

#include <RED4ext/RED4ext.hpp>
#include <RED4ext/Scripting/Natives/GameTime.hpp>
#include <RED4ext/Scripting/Natives/ScriptGameInstance.hpp>

/*
 * To run this plugin you need to load it with RED4ext (https://github.com/WopsS/RED4ext).
 */

void PrintGameTime(RED4ext::IScriptable* aContext, RED4ext::CStackFrame* aFrame, void* aOut, int64_t a4)
{
    RED4EXT_UNUSED_PARAMETER(aContext);
    RED4EXT_UNUSED_PARAMETER(aFrame);
    RED4EXT_UNUSED_PARAMETER(aOut);
    RED4EXT_UNUSED_PARAMETER(a4);

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
    RED4EXT_UNUSED_PARAMETER(aContext);
    RED4EXT_UNUSED_PARAMETER(aFrame);
    RED4EXT_UNUSED_PARAMETER(aOut);
    RED4EXT_UNUSED_PARAMETER(a4);

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
    RED4EXT_UNUSED_PARAMETER(aContext);
    RED4EXT_UNUSED_PARAMETER(aFrame);
    RED4EXT_UNUSED_PARAMETER(aOut);
    RED4EXT_UNUSED_PARAMETER(a4);

    RED4ext::ScriptGameInstance gameInstance;
    RED4ext::Handle<RED4ext::IScriptable> uiManager;
    RED4ext::ExecuteFunction("ScriptGameInstance", "GetUISystem", &uiManager, &gameInstance);
}

void PrintScannerStatus(RED4ext::IScriptable* aContext, RED4ext::CStackFrame* aFrame, void* aOut, int64_t a4)
{
    RED4EXT_UNUSED_PARAMETER(aContext);
    RED4EXT_UNUSED_PARAMETER(aFrame);
    RED4EXT_UNUSED_PARAMETER(aOut);
    RED4EXT_UNUSED_PARAMETER(a4);

    RED4ext::ScriptGameInstance gameInstance;
    RED4ext::Handle<RED4ext::IScriptable> handle;
    RED4ext::ExecuteGlobalFunction("GetPlayer;GameInstance", &handle, gameInstance);

    if (handle)
    {
        auto rtti = RED4ext::CRTTISystem::Get();
        auto playerPuppetCls = rtti->GetClass("PlayerPuppet");
        auto getHudManagerFunc = playerPuppetCls->GetFunction("GetHudManager");

        RED4ext::Handle<RED4ext::IScriptable> hudManager;
        RED4ext::ExecuteFunction(handle, getHudManagerFunc, &hudManager);

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

#include <RED4ext/Containers/DynArray.hpp>

RED4EXT_C_EXPORT void RED4EXT_CALL RegisterTypes()
{
    // https://github.com/oneapi-src/oneTBB/blob/master/include/oneapi/tbb/memory_pool.h
    // https://stackoverflow.com/questions/826569/compelling-examples-of-custom-c-allocators
    // https://stackoverflow.com/questions/657783/how-does-intel-tbbs-scalable-allocator-work

    {
        std::vector<int /*, std::pmr::polymorphic_allocator<int>*/> vector;
        vector.clear();
        std::cout << vector.size() << std::endl;

        std::uninitialized_copy(vector.begin(), vector.end(), vector.data());
        std::uninitialized_move(vector.begin(), vector.end(), vector.data());
    }

    {
        RED4ext::Containers::DynArray<int, RED4ext::Allocator<int, RED4ext::Memory::PoolRTTIFunction>>
            DynArrayDefaultAlloc;

        constexpr auto max_size = DynArrayDefaultAlloc.MaxSize();
        std::cout << max_size << std::endl;

        auto capacity = DynArrayDefaultAlloc.Capacity();
        std::cout << capacity << std::endl;

        DynArrayDefaultAlloc.Reserve(1025);

        capacity = DynArrayDefaultAlloc.Capacity();
        std::cout << capacity << std::endl;

        for (auto i : DynArrayDefaultAlloc)
        {
            std::cout << i << " ";
        }
        std::cout << std::endl;

        for (const auto i : DynArrayDefaultAlloc)
        {
            std::cout << i << " ";
        }
        std::cout << std::endl;

        for (auto& i : DynArrayDefaultAlloc)
        {
            std::cout << i << " ";
        }
        std::cout << std::endl;

        for (const auto& i : DynArrayDefaultAlloc)
        {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    }

    {
        RED4ext::Containers::DynArray<int> DynArray({1, 2, 3});
    }

    {
        RED4ext::Containers::DynArray<int> DynArray1({1, 2, 3});
        RED4ext::Containers::DynArray<int> DynArray2(DynArray1);
    }

    {
        RED4ext::Containers::DynArray<int> DynArray1({1, 2, 3});
        RED4ext::Containers::DynArray<int> DynArray2(std::move(DynArray1));
    }

    {
        RED4ext::Containers::DynArray<int> DynArray(1);
    }

    {
        RED4ext::Containers::DynArray<int> DynArray(1, 123);
    }

    {
        RED4ext::Containers::DynArray<int> DynArray(1, 123);
        DynArray.ShrinkToFit();
        DynArray.Clear();
        DynArray.PopBack();
        DynArray.Resize(10);
        DynArray.Resize(123, 4);
        DynArray.PushBack(1);
        DynArray.PushBack(std::move(2));
        DynArray.EmplaceBack(3);
        DynArray.Assign(3, 5);
        DynArray.Erase(DynArray.begin());
        DynArray.Erase(DynArray.begin(), DynArray.end());
    }

    {
        RED4ext::Containers::DynArray<int*> DynArray;
        DynArray.ShrinkToFit();
        DynArray.Clear();
        DynArray.PopBack();
    }

    {
        RED4ext::Allocator<int, RED4ext::Memory::PoolAI> allocator;
        auto allocate = allocator.Allocate(12);
        auto a = allocator.Reallocate(allocate, 1234);
        allocator.Deallocate(a);

        auto allocateAtLeast = allocator.AllocateAtLeast(255);
        allocator.Deallocate(allocateAtLeast);
    }

    {
        constexpr RED4ext::Allocator<int, RED4ext::Memory::PoolAI> allocator;
        constexpr RED4ext::Allocator<void*, RED4ext::Memory::PoolAI_Attitudes> allocator2;
        constexpr RED4ext::Allocator<char, RED4ext::Memory::PoolAI> allocator3;

        {
            constexpr auto equal = (allocator == allocator2);
            std::cout << equal << std::endl;
        }

        {
            constexpr auto equal = (allocator == allocator3);
            std::cout << equal << std::endl;
        }
    }

    {
        std::allocator<int> allocator;
        auto a = allocator.allocate(12);
    }

    {
        // std::allocator_traits<RED4ext::Allocator<int, RED4ext::Memory::PoolAI>> triats;
        // std::allocator_traits<RED4ext::Allocator<int,
        // RED4ext::Memory::PoolAI>>::select_on_container_copy_construction triats.allocate(10);
    }
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
    RED4EXT_UNUSED_PARAMETER(aHandle);
    RED4EXT_UNUSED_PARAMETER(aSdk);

    switch (aReason)
    {
    case RED4ext::EMainReason::Load:
    {
        auto rtti = RED4ext::CRTTISystem::Get();

        rtti->AddRegisterCallback(RegisterTypes);
        rtti->AddPostRegisterCallback(PostRegisterTypes);
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
