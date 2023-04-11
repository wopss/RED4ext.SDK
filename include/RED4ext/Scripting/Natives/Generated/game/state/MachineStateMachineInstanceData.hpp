#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>

namespace RED4ext
{
struct IScriptable;

namespace game::state
{
struct MachineStateMachineInstanceData
{
    static constexpr const char* NAME = "gamestateMachineStateMachineInstanceData";
    static constexpr const char* ALIAS = "StateMachineInstanceData";

    CName referenceName; // 00
    uint32_t priority; // 08
    uint8_t unk0C[0x10 - 0xC]; // C
    Handle<IScriptable> initData; // 10
};
RED4EXT_ASSERT_SIZE(MachineStateMachineInstanceData, 0x20);
} // namespace game::state
using gamestateMachineStateMachineInstanceData = game::state::MachineStateMachineInstanceData;
using StateMachineInstanceData = game::state::MachineStateMachineInstanceData;
} // namespace RED4ext

// clang-format on
