#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_FloatValue.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/EAnimGraphLogicOp.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_WrapperValue : anim::AnimNode_FloatValue
{
    static constexpr const char* NAME = "animAnimNode_WrapperValue";
    static constexpr const char* ALIAS = NAME;

    DynArray<CName> wrapperNames; // 48
    anim::EAnimGraphLogicOp logicOp; // 58
    bool oneMinus; // 5C
    uint8_t unk5D[0x70 - 0x5D]; // 5D
};
RED4EXT_ASSERT_SIZE(AnimNode_WrapperValue, 0x70);
} // namespace anim
using animAnimNode_WrapperValue = anim::AnimNode_WrapperValue;
} // namespace RED4ext

// clang-format on
