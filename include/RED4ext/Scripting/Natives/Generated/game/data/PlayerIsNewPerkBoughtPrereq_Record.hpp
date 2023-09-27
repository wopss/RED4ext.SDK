#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/IPrereq_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct PlayerIsNewPerkBoughtPrereq_Record : game::data::IPrereq_Record
{
    static constexpr const char* NAME = "gamedataPlayerIsNewPerkBoughtPrereq_Record";
    static constexpr const char* ALIAS = "PlayerIsNewPerkBoughtPrereq_Record";

    uint8_t unk58[0x80 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(PlayerIsNewPerkBoughtPrereq_Record, 0x80);
} // namespace game::data
using gamedataPlayerIsNewPerkBoughtPrereq_Record = game::data::PlayerIsNewPerkBoughtPrereq_Record;
using PlayerIsNewPerkBoughtPrereq_Record = game::data::PlayerIsNewPerkBoughtPrereq_Record;
} // namespace RED4ext

// clang-format on
