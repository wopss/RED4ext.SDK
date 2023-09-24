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
struct ContentAssignment_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataContentAssignment_Record";
    static constexpr const char* ALIAS = "ContentAssignment_Record";

    uint8_t unk48[0x60 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(ContentAssignment_Record, 0x60);
} // namespace game::data
using gamedataContentAssignment_Record = game::data::ContentAssignment_Record;
using ContentAssignment_Record = game::data::ContentAssignment_Record;
} // namespace RED4ext

// clang-format on
