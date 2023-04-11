#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/EntityID.hpp>

namespace RED4ext
{
namespace game { struct IBlackboard; }
namespace game { struct Object; }
namespace game::bb { struct ScriptDefinition; }

namespace game::state
{
struct MachineScriptInterface : IScriptable
{
    static constexpr const char* NAME = "gamestateMachineScriptInterface";
    static constexpr const char* ALIAS = "StateScriptInterface";

    WeakHandle<game::Object> owner; // 40
    ent::EntityID ownerEntityID; // 50
    WeakHandle<game::Object> executionOwner; // 58
    ent::EntityID executionOwnerEntityID; // 68
    WeakHandle<game::IBlackboard> localBlackboard; // 70
    Handle<game::bb::ScriptDefinition> stateMachineBBDef; // 80
};
RED4EXT_ASSERT_SIZE(MachineScriptInterface, 0x90);
} // namespace game::state
using gamestateMachineScriptInterface = game::state::MachineScriptInterface;
using StateScriptInterface = game::state::MachineScriptInterface;
} // namespace RED4ext

// clang-format on
