#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/EntityID.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/GodModeEntityData.hpp>

namespace RED4ext
{
namespace game
{
struct GodModeSaveEntityData
{
    static constexpr const char* NAME = "gameGodModeSaveEntityData";
    static constexpr const char* ALIAS = NAME;

    ent::EntityID entityId; // 00
    game::GodModeEntityData data; // 08
};
RED4EXT_ASSERT_SIZE(GodModeSaveEntityData, 0x28);
} // namespace game
using gameGodModeSaveEntityData = game::GodModeSaveEntityData;
} // namespace RED4ext

// clang-format on
