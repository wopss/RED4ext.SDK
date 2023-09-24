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
struct ComputerUIStyle_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataComputerUIStyle_Record";
    static constexpr const char* ALIAS = "ComputerUIStyle_Record";

    uint8_t unk48[0x68 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(ComputerUIStyle_Record, 0x68);
} // namespace game::data
using gamedataComputerUIStyle_Record = game::data::ComputerUIStyle_Record;
using ComputerUIStyle_Record = game::data::ComputerUIStyle_Record;
} // namespace RED4ext

// clang-format on
