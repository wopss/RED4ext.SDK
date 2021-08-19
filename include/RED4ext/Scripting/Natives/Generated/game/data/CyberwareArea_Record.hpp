#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/EquipmentArea_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct CyberwareArea_Record : game::data::EquipmentArea_Record
{
    static constexpr const char* NAME = "gamedataCyberwareArea_Record";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk60[0x68 - 0x60]; // 60
};
RED4EXT_ASSERT_SIZE(CyberwareArea_Record, 0x68);
} // namespace game::data
} // namespace RED4ext
