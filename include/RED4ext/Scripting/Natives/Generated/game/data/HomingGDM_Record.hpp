#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/GrenadeDeliveryMethod_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct HomingGDM_Record : game::data::GrenadeDeliveryMethod_Record
{
    static constexpr const char* NAME = "gamedataHomingGDM_Record";
    static constexpr const char* ALIAS = "HomingGDM_Record";

    uint8_t unk60[0x78 - 0x60]; // 60
};
RED4EXT_ASSERT_SIZE(HomingGDM_Record, 0x78);
} // namespace game::data
using HomingGDM_Record = game::data::HomingGDM_Record;
} // namespace RED4ext
