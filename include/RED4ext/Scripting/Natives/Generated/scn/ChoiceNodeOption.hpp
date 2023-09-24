#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
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

namespace scn
{
struct ChoiceNodeOption
{
    static constexpr const char* NAME = "scnChoiceNodeOption";
    static constexpr const char* ALIAS = NAME;

    scn::screenplay::ItemId screenplayOptionId; // 00
    uint8_t unk04[0x8 - 0x4]; // 4
    CName caption; // 08
    bool blueline; // 10
    bool isFixedAsRead; // 11
    bool isSingleChoice; // 12
    uint8_t unk13[0x14 - 0x13]; // 13
    game::interactions::ChoiceTypeWrapper type; // 14
    Handle<scn::ChoiceNodeNsTimedParams> timedParams; // 18
    Handle<quest::IBaseCondition> questCondition; // 28
    Handle<quest::IBaseCondition> triggerCondition; // 38
    Handle<quest::IBaseCondition> bluelineCondition; // 48
    Handle<quest::IBaseCondition> emphasisCondition; // 58
    Handle<quest::IBaseCondition> iconCondition; // 68
    TweakDBID gameplayAction; // 78
    DynArray<TweakDBID> iconTagIds; // 80
    uint32_t exDataFlags; // 90
    scn::ReferencePointId mappinReferencePointId; // 94
    Handle<scn::TimedCondition> timedCondition; // 98
};
RED4EXT_ASSERT_SIZE(ChoiceNodeOption, 0xA8);
} // namespace scn
using scnChoiceNodeOption = scn::ChoiceNodeOption;
} // namespace RED4ext

// clang-format on
