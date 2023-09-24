#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/EquipmentArea_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct CyberwareArea_Record : game::data::EquipmentArea_Record
{
    static constexpr const char* NAME = "gamedataCyberwareArea_Record";
    static constexpr const char* ALIAS = "CyberwareArea_Record";

    uint8_t unk80[0x90 - 0x80]; // 80
};
RED4EXT_ASSERT_SIZE(CyberwareArea_Record, 0x90);
} // namespace game::data
using gamedataCyberwareArea_Record = game::data::CyberwareArea_Record;
using CyberwareArea_Record = game::data::CyberwareArea_Record;
} // namespace RED4ext

// clang-format on
