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
struct BuildPerk_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataBuildPerk_Record";
    static constexpr const char* ALIAS = "BuildPerk_Record";

    uint8_t unk48[0x70 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(BuildPerk_Record, 0x70);
} // namespace game::data
using gamedataBuildPerk_Record = game::data::BuildPerk_Record;
using BuildPerk_Record = game::data::BuildPerk_Record;
} // namespace RED4ext

// clang-format on
