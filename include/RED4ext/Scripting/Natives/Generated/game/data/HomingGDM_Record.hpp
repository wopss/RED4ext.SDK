#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/GrenadeDeliveryMethod_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct HomingGDM_Record : game::data::GrenadeDeliveryMethod_Record
{
    static constexpr const char* NAME = "gamedataHomingGDM_Record";
    static constexpr const char* ALIAS = "HomingGDM_Record";

    uint8_t unkA0[0x100 - 0xA0]; // A0
};
RED4EXT_ASSERT_SIZE(HomingGDM_Record, 0x100);
} // namespace game::data
using gamedataHomingGDM_Record = game::data::HomingGDM_Record;
using HomingGDM_Record = game::data::HomingGDM_Record;
} // namespace RED4ext

// clang-format on
