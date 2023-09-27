#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data
{
struct NPCRarity_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataNPCRarity_Record";
    static constexpr const char* ALIAS = "NPCRarity_Record";

    uint8_t unk48[0x88 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(NPCRarity_Record, 0x88);
} // namespace game::data
using gamedataNPCRarity_Record = game::data::NPCRarity_Record;
using NPCRarity_Record = game::data::NPCRarity_Record;
} // namespace RED4ext

// clang-format on
