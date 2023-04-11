#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/MotionTableAction.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/MotionTableType.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/ParentStaticSwitchBranch.hpp>

namespace RED4ext
{
namespace anim
{
struct IMotionTableProvider : ISerializable
{
    static constexpr const char* NAME = "animIMotionTableProvider";
    static constexpr const char* ALIAS = NAME;

    int32_t id; // 30
    int32_t parentId; // 34
    anim::MotionTableType type; // 38
    anim::MotionTableAction action; // 3C
    anim::ParentStaticSwitchBranch parentStaticSwitchBranch; // 40
    uint8_t unk44[0x50 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(IMotionTableProvider, 0x50);
} // namespace anim
using animIMotionTableProvider = anim::IMotionTableProvider;
} // namespace RED4ext

// clang-format on
