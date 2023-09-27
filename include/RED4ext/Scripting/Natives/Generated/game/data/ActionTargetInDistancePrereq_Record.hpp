#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/IPrereq_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct ActionTargetInDistancePrereq_Record : game::data::IPrereq_Record
{
    static constexpr const char* NAME = "gamedataActionTargetInDistancePrereq_Record";
    static constexpr const char* ALIAS = "ActionTargetInDistancePrereq_Record";

    uint8_t unk58[0x88 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(ActionTargetInDistancePrereq_Record, 0x88);
} // namespace game::data
using gamedataActionTargetInDistancePrereq_Record = game::data::ActionTargetInDistancePrereq_Record;
using ActionTargetInDistancePrereq_Record = game::data::ActionTargetInDistancePrereq_Record;
} // namespace RED4ext

// clang-format on
