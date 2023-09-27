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
struct InteractionBase_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataInteractionBase_Record";
    static constexpr const char* ALIAS = "InteractionBase_Record";

    uint8_t unk48[0x90 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(InteractionBase_Record, 0x90);
} // namespace game::data
using gamedataInteractionBase_Record = game::data::InteractionBase_Record;
using InteractionBase_Record = game::data::InteractionBase_Record;
} // namespace RED4ext

// clang-format on
