#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/District.hpp>

namespace RED4ext
{
namespace game::ui
{
struct DistrictTriggerData
{
    static constexpr const char* NAME = "gameuiDistrictTriggerData";
    static constexpr const char* ALIAS = NAME;

    game::data::District district; // 00
    uint8_t unk04[0x8 - 0x4]; // 4
    CName triggerName; // 08
    uint8_t unk10[0x20 - 0x10]; // 10
};
RED4EXT_ASSERT_SIZE(DistrictTriggerData, 0x20);
} // namespace game::ui
using gameuiDistrictTriggerData = game::ui::DistrictTriggerData;
} // namespace RED4ext

// clang-format on
