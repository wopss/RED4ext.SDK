#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/InteractionBase_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct InteractionMountBase_Record : game::data::InteractionBase_Record
{
    static constexpr const char* NAME = "gamedataInteractionMountBase_Record";
    static constexpr const char* ALIAS = "InteractionMountBase_Record";

    uint8_t unk60[0x68 - 0x60]; // 60
};
RED4EXT_ASSERT_SIZE(InteractionMountBase_Record, 0x68);
} // namespace game::data
using InteractionMountBase_Record = game::data::InteractionMountBase_Record;
} // namespace RED4ext
