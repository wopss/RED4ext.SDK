#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ScriptableSystem.hpp>

namespace RED4ext
{
namespace game
{
struct IEquipmentSystem : game::ScriptableSystem
{
    static constexpr const char* NAME = "gameIEquipmentSystem";
    static constexpr const char* ALIAS = "IEquipmentSystem";

};
RED4EXT_ASSERT_SIZE(IEquipmentSystem, 0x530);
} // namespace game
using gameIEquipmentSystem = game::IEquipmentSystem;
using IEquipmentSystem = game::IEquipmentSystem;
} // namespace RED4ext

// clang-format on
