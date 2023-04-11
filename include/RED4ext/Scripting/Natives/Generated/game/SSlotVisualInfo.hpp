#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/EquipmentArea.hpp>

namespace RED4ext
{
namespace game
{
struct SSlotVisualInfo
{
    static constexpr const char* NAME = "gameSSlotVisualInfo";
    static constexpr const char* ALIAS = "SSlotVisualInfo";

    game::data::EquipmentArea areaType; // 00
    bool isHidden; // 04
    uint8_t unk05[0x8 - 0x5]; // 5
    ItemID visualItem; // 08
};
RED4EXT_ASSERT_SIZE(SSlotVisualInfo, 0x18);
} // namespace game
using gameSSlotVisualInfo = game::SSlotVisualInfo;
using SSlotVisualInfo = game::SSlotVisualInfo;
} // namespace RED4ext

// clang-format on
