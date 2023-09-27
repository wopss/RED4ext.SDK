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
struct AttributeData_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataAttributeData_Record";
    static constexpr const char* ALIAS = "AttributeData_Record";

    uint8_t unk48[0xA0 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AttributeData_Record, 0xA0);
} // namespace game::data
using gamedataAttributeData_Record = game::data::AttributeData_Record;
using AttributeData_Record = game::data::AttributeData_Record;
} // namespace RED4ext

// clang-format on
