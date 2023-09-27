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
struct Accuracy_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataAccuracy_Record";
    static constexpr const char* ALIAS = "Accuracy_Record";

    uint8_t unk48[0x60 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(Accuracy_Record, 0x60);
} // namespace game::data
using gamedataAccuracy_Record = game::data::Accuracy_Record;
using Accuracy_Record = game::data::Accuracy_Record;
} // namespace RED4ext

// clang-format on
