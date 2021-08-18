#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/IPrereq_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct HitPrereq_Record : game::data::IPrereq_Record
{
    static constexpr const char* NAME = "gamedataHitPrereq_Record";
    static constexpr const char* ALIAS = "HitPrereq_Record";

    uint8_t unk50[0x60 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(HitPrereq_Record, 0x60);
} // namespace game::data
using HitPrereq_Record = game::data::HitPrereq_Record;
} // namespace RED4ext
