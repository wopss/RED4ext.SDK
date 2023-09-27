#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/Effector_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct UseConsumableEffector_Record : game::data::Effector_Record
{
    static constexpr const char* NAME = "gamedataUseConsumableEffector_Record";
    static constexpr const char* ALIAS = "UseConsumableEffector_Record";

};
RED4EXT_ASSERT_SIZE(UseConsumableEffector_Record, 0x88);
} // namespace game::data
using gamedataUseConsumableEffector_Record = game::data::UseConsumableEffector_Record;
using UseConsumableEffector_Record = game::data::UseConsumableEffector_Record;
} // namespace RED4ext

// clang-format on
