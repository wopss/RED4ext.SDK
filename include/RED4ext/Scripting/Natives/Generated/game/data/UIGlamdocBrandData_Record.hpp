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
struct UIGlamdocBrandData_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataUIGlamdocBrandData_Record";
    static constexpr const char* ALIAS = "UIGlamdocBrandData_Record";

    uint8_t unk48[0x90 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(UIGlamdocBrandData_Record, 0x90);
} // namespace game::data
using gamedataUIGlamdocBrandData_Record = game::data::UIGlamdocBrandData_Record;
using UIGlamdocBrandData_Record = game::data::UIGlamdocBrandData_Record;
} // namespace RED4ext

// clang-format on
