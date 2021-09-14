#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/IPrereq_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct ActionTargetInDistancePrereq_Record : game::data::IPrereq_Record
{
    static constexpr const char* NAME = "gamedataActionTargetInDistancePrereq_Record";
    static constexpr const char* ALIAS = "ActionTargetInDistancePrereq_Record";

    uint8_t unk50[0x60 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(ActionTargetInDistancePrereq_Record, 0x60);
} // namespace game::data
using ActionTargetInDistancePrereq_Record = game::data::ActionTargetInDistancePrereq_Record;
} // namespace RED4ext
