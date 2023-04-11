#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/NodeProfileTimerMode.hpp>

namespace RED4ext
{
namespace anim
{
struct NodeProfileTimerInfo
{
    static constexpr const char* NAME = "animNodeProfileTimerInfo";
    static constexpr const char* ALIAS = NAME;

    CName name; // 00
    anim::NodeProfileTimerMode mode; // 08
    uint8_t unk0C[0x10 - 0xC]; // C
};
RED4EXT_ASSERT_SIZE(NodeProfileTimerInfo, 0x10);
} // namespace anim
using animNodeProfileTimerInfo = anim::NodeProfileTimerInfo;
} // namespace RED4ext

// clang-format on
