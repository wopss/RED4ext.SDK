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
struct Trait_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataTrait_Record";
    static constexpr const char* ALIAS = "Trait_Record";

    uint8_t unk48[0xB0 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(Trait_Record, 0xB0);
} // namespace game::data
using gamedataTrait_Record = game::data::Trait_Record;
using Trait_Record = game::data::Trait_Record;
} // namespace RED4ext

// clang-format on
