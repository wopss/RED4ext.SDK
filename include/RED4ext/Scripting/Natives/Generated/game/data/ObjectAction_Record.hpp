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
struct ObjectAction_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataObjectAction_Record";
    static constexpr const char* ALIAS = "ObjectAction_Record";

    uint8_t unk48[0x148 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(ObjectAction_Record, 0x148);
} // namespace game::data
using gamedataObjectAction_Record = game::data::ObjectAction_Record;
using ObjectAction_Record = game::data::ObjectAction_Record;
} // namespace RED4ext

// clang-format on
