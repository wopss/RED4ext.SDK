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
struct PerkPrereq_Record : game::data::IPrereq_Record
{
    static constexpr const char* NAME = "gamedataPerkPrereq_Record";
    static constexpr const char* ALIAS = "PerkPrereq_Record";

    uint8_t unk58[0x68 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(PerkPrereq_Record, 0x68);
} // namespace game::data
using gamedataPerkPrereq_Record = game::data::PerkPrereq_Record;
using PerkPrereq_Record = game::data::PerkPrereq_Record;
} // namespace RED4ext

// clang-format on
