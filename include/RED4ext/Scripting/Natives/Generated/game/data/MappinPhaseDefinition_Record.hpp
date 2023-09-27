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
struct MappinPhaseDefinition_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataMappinPhaseDefinition_Record";
    static constexpr const char* ALIAS = "MappinPhaseDefinition_Record";

    uint8_t unk48[0x60 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(MappinPhaseDefinition_Record, 0x60);
} // namespace game::data
using gamedataMappinPhaseDefinition_Record = game::data::MappinPhaseDefinition_Record;
using MappinPhaseDefinition_Record = game::data::MappinPhaseDefinition_Record;
} // namespace RED4ext

// clang-format on
