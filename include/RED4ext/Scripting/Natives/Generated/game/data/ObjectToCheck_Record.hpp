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
struct ObjectToCheck_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataObjectToCheck_Record";
    static constexpr const char* ALIAS = "ObjectToCheck_Record";

};
RED4EXT_ASSERT_SIZE(ObjectToCheck_Record, 0x48);
} // namespace game::data
using gamedataObjectToCheck_Record = game::data::ObjectToCheck_Record;
using ObjectToCheck_Record = game::data::ObjectToCheck_Record;
} // namespace RED4ext

// clang-format on
