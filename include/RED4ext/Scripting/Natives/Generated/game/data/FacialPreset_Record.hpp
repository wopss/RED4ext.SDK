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
struct FacialPreset_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataFacialPreset_Record";
    static constexpr const char* ALIAS = "FacialPreset_Record";

    uint8_t unk48[0x78 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(FacialPreset_Record, 0x78);
} // namespace game::data
using gamedataFacialPreset_Record = game::data::FacialPreset_Record;
using FacialPreset_Record = game::data::FacialPreset_Record;
} // namespace RED4ext

// clang-format on
