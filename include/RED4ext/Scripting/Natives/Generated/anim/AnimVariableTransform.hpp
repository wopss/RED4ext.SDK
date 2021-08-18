#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/QsTransform.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimVariable.hpp>

namespace RED4ext
{
namespace anim { 
struct AnimVariableTransform : anim::AnimVariable
{
    static constexpr const char* NAME = "animAnimVariableTransform";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk38[0x40 - 0x38]; // 38
    QsTransform value; // 40
    QsTransform default; // 70
};
RED4EXT_ASSERT_SIZE(AnimVariableTransform, 0xA0);
} // namespace anim
} // namespace RED4ext
