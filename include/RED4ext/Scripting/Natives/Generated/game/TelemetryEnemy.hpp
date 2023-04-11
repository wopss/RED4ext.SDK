#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/EntityID.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/ArchetypeType.hpp>

namespace RED4ext
{
namespace game { struct Object; }

namespace game
{
struct TelemetryEnemy
{
    static constexpr const char* NAME = "gameTelemetryEnemy";
    static constexpr const char* ALIAS = "TelemetryEnemy";

    TweakDBID characterRecord; // 00
    CString enemyAffiliation; // 08
    WeakHandle<game::Object> enemy; // 28
    ent::EntityID enemyEntityID; // 38
    game::data::ArchetypeType archetype; // 40
    int32_t level; // 44
};
RED4EXT_ASSERT_SIZE(TelemetryEnemy, 0x48);
} // namespace game
using gameTelemetryEnemy = game::TelemetryEnemy;
using TelemetryEnemy = game::TelemetryEnemy;
} // namespace RED4ext

// clang-format on
