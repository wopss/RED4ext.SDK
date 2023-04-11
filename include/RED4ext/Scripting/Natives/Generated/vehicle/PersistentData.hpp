#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Component.hpp>

namespace RED4ext
{
namespace vehicle
{
struct PersistentData : game::Component
{
    static constexpr const char* NAME = "vehiclePersistentData";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(PersistentData, 0xA8);
} // namespace vehicle
using vehiclePersistentData = vehicle::PersistentData;
} // namespace RED4ext

// clang-format on
