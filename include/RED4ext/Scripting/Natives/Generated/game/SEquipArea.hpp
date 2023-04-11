#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/SEquipSlot.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/EquipmentArea.hpp>

namespace RED4ext
{
namespace game
{
struct SEquipArea
{
    static constexpr const char* NAME = "gameSEquipArea";
    static constexpr const char* ALIAS = "SEquipArea";

    game::data::EquipmentArea areaType; // 00
    uint8_t unk04[0x8 - 0x4]; // 4
    DynArray<game::SEquipSlot> equipSlots; // 08
    int32_t activeIndex; // 18
    uint8_t unk1C[0x20 - 0x1C]; // 1C
};
RED4EXT_ASSERT_SIZE(SEquipArea, 0x20);
} // namespace game
using gameSEquipArea = game::SEquipArea;
using SEquipArea = game::SEquipArea;
} // namespace RED4ext

// clang-format on
