#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data
{
struct UICondition_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataUICondition_Record";
    static constexpr const char* ALIAS = "UICondition_Record";

    uint8_t unk48[0x70 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(UICondition_Record, 0x70);
} // namespace game::data
using gamedataUICondition_Record = game::data::UICondition_Record;
using UICondition_Record = game::data::UICondition_Record;
} // namespace RED4ext

// clang-format on
