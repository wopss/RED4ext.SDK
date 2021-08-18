#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/work/IContainerEntry.hpp>

namespace RED4ext
{
namespace work { 
struct ReactionSequence : work::IContainerEntry
{
    static constexpr const char* NAME = "workReactionSequence";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk50[0x58 - 0x50]; // 50
    DynArray<TweakDBID> reactionTypes; // 58
    float forcedBlendIn; // 68
    float facialKeyWeight; // 6C
    CName mainEmotionalState; // 70
    CName emotionalExpression; // 78
    CName facialIdleMaleAnimation; // 80
    CName facialIdleKey_MaleAnimation; // 88
    CName facialIdleFemaleAnimation; // 90
    CName facialIdleKey_FemaleAnimation; // 98
};
RED4EXT_ASSERT_SIZE(ReactionSequence, 0xA0);
} // namespace work
} // namespace RED4ext
