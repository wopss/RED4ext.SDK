#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/population/Modifier.hpp>

namespace RED4ext
{
namespace game
{
struct RecordIdSpawnModifier : population::Modifier
{
    static constexpr const char* NAME = "gameRecordIdSpawnModifier";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x38 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(RecordIdSpawnModifier, 0x38);
} // namespace game
using gameRecordIdSpawnModifier = game::RecordIdSpawnModifier;
} // namespace RED4ext

// clang-format on
