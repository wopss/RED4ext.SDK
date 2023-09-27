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
struct InitLoadingScreen_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataInitLoadingScreen_Record";
    static constexpr const char* ALIAS = "InitLoadingScreen_Record";

    uint8_t unk48[0xF0 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(InitLoadingScreen_Record, 0xF0);
} // namespace game::data
using gamedataInitLoadingScreen_Record = game::data::InitLoadingScreen_Record;
using InitLoadingScreen_Record = game::data::InitLoadingScreen_Record;
} // namespace RED4ext

// clang-format on
