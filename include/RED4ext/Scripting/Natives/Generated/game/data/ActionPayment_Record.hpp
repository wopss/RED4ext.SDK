#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/ObjectAction_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct ActionPayment_Record : game::data::ObjectAction_Record
{
    static constexpr const char* NAME = "gamedataActionPayment_Record";
    static constexpr const char* ALIAS = "ActionPayment_Record";

};
RED4EXT_ASSERT_SIZE(ActionPayment_Record, 0x148);
} // namespace game::data
using gamedataActionPayment_Record = game::data::ActionPayment_Record;
using ActionPayment_Record = game::data::ActionPayment_Record;
} // namespace RED4ext

// clang-format on
