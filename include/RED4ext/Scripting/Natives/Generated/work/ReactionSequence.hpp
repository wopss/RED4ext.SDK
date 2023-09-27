#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/work/IContainerEntry.hpp>

namespace RED4ext
{
namespace work
{
struct ReactionSequence : work::IContainerEntry
{
    static constexpr const char* NAME = "workReactionSequence";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk58[0x60 - 0x58]; // 58
    DynArray<TweakDBID> reactionTypes; // 60
    float forcedBlendIn; // 70
    float facialKeyWeight; // 74
    CName mainEmotionalState; // 78
    CName emotionalExpression; // 80
    CName facialIdleMaleAnimation; // 88
    CName facialIdleKey_MaleAnimation; // 90
    CName facialIdleFemaleAnimation; // 98
    CName facialIdleKey_FemaleAnimation; // A0
};
RED4EXT_ASSERT_SIZE(ReactionSequence, 0xA8);
} // namespace work
using workReactionSequence = work::ReactionSequence;
} // namespace RED4ext

// clang-format on
