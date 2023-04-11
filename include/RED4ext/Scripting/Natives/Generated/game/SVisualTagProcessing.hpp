#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/EquipmentArea.hpp>

namespace RED4ext
{
namespace game
{
struct SVisualTagProcessing
{
    static constexpr const char* NAME = "gameSVisualTagProcessing";
    static constexpr const char* ALIAS = "SVisualTagProcessing";

    game::data::EquipmentArea areaType; // 00
    bool showItem; // 04
    uint8_t unk05[0x8 - 0x5]; // 5
};
RED4EXT_ASSERT_SIZE(SVisualTagProcessing, 0x8);
} // namespace game
using gameSVisualTagProcessing = game::SVisualTagProcessing;
using SVisualTagProcessing = game::SVisualTagProcessing;
} // namespace RED4ext

// clang-format on
