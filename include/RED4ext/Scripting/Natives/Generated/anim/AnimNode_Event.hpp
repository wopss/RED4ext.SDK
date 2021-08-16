#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_FloatValue.hpp>

namespace RED4ext
{
namespace anim { 
struct AnimNode_Event : anim::AnimNode_FloatValue
{
    static constexpr const char* NAME = "animAnimNode_Event";
    static constexpr const char* ALIAS = NAME;

    CName eventName; // 48
    float defaultValue; // 50
    float eventValue; // 54
    uint8_t unk58[0x68 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(AnimNode_Event, 0x68);
} // namespace anim
} // namespace RED4ext
