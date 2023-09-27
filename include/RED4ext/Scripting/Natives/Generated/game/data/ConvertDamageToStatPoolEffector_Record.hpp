#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/Effector_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct ConvertDamageToStatPoolEffector_Record : game::data::Effector_Record
{
    static constexpr const char* NAME = "gamedataConvertDamageToStatPoolEffector_Record";
    static constexpr const char* ALIAS = "ConvertDamageToStatPoolEffector_Record";

    uint8_t unk88[0xB0 - 0x88]; // 88
};
RED4EXT_ASSERT_SIZE(ConvertDamageToStatPoolEffector_Record, 0xB0);
} // namespace game::data
using gamedataConvertDamageToStatPoolEffector_Record = game::data::ConvertDamageToStatPoolEffector_Record;
using ConvertDamageToStatPoolEffector_Record = game::data::ConvertDamageToStatPoolEffector_Record;
} // namespace RED4ext

// clang-format on
