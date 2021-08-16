#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game { struct IBlackboard; }
namespace game { struct Object; }

namespace game::state { 
struct MachineScriptInterface : IScriptable
{
    static constexpr const char* NAME = "gamestateMachineScriptInterface";
    static constexpr const char* ALIAS = "StateScriptInterface";

    WeakHandle<game::Object> owner; // 40
    WeakHandle<game::Object> executionOwner; // 50
    WeakHandle<game::IBlackboard> localBlackboard; // 60
};
RED4EXT_ASSERT_SIZE(MachineScriptInterface, 0x70);
} // namespace game::state
using StateScriptInterface = game::state::MachineScriptInterface;
} // namespace RED4ext
