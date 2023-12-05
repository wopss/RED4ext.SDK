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
struct ModifyStatPoolValueEffector_Record : game::data::Effector_Record
{
    static constexpr const char* NAME = "gamedataModifyStatPoolValueEffector_Record";
    static constexpr const char* ALIAS = "ModifyStatPoolValueEffector_Record";

    uint8_t unk88[0xB8 - 0x88]; // 88
};
RED4EXT_ASSERT_SIZE(ModifyStatPoolValueEffector_Record, 0xB8);
} // namespace game::data
using gamedataModifyStatPoolValueEffector_Record = game::data::ModifyStatPoolValueEffector_Record;
using ModifyStatPoolValueEffector_Record = game::data::ModifyStatPoolValueEffector_Record;
} // namespace RED4ext

// clang-format on
