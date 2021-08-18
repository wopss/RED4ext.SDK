#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/ChoiceTypeWrapper.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/ReferencePointId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/screenplay/ItemId.hpp>

namespace RED4ext
{
namespace quest { struct IBaseCondition; }
namespace scn { struct ChoiceNodeNsTimedParams; }
namespace scn { struct TimedCondition; }

namespace scn { 
struct ChoiceNodeOption
{
    static constexpr const char* NAME = "scnChoiceNodeOption";
    static constexpr const char* ALIAS = NAME;

    scn::screenplay::ItemId screenplayOptionId; // 00
    bool blueline; // 04
    bool isSingleChoice; // 05
    uint8_t unk06[0x8 - 0x6]; // 6
    game::interactions::ChoiceTypeWrapper type; // 08
    uint8_t unk0C[0x10 - 0xC]; // C
    Handle<scn::ChoiceNodeNsTimedParams> timedParams; // 10
    Handle<quest::IBaseCondition> questCondition; // 20
    Handle<quest::IBaseCondition> triggerCondition; // 30
    Handle<quest::IBaseCondition> bluelineCondition; // 40
    TweakDBID gameplayAction; // 50
    DynArray<TweakDBID> iconTagIds; // 58
    uint32_t exDataFlags; // 68
    scn::ReferencePointId mappinReferencePointId; // 6C
    Handle<scn::TimedCondition> timedCondition; // 70
};
RED4EXT_ASSERT_SIZE(ChoiceNodeOption, 0x80);
} // namespace scn
} // namespace RED4ext
