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
struct BaseSign_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataBaseSign_Record";
    static constexpr const char* ALIAS = "BaseSign_Record";

    uint8_t unk48[0x70 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(BaseSign_Record, 0x70);
} // namespace game::data
using gamedataBaseSign_Record = game::data::BaseSign_Record;
using BaseSign_Record = game::data::BaseSign_Record;
} // namespace RED4ext

// clang-format on
