#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/AIEvent.hpp>

namespace RED4ext
{
namespace ent { struct Entity; }

namespace AI
{
struct NewThreat : AI::AIEvent
{
    static constexpr const char* NAME = "AINewThreat";
    static constexpr const char* ALIAS = "NewThreat";

    WeakHandle<ent::Entity> owner; // 50
    WeakHandle<ent::Entity> threat; // 60
    bool isHostile; // 70
    bool isEnemy; // 71
    uint8_t unk72[0x78 - 0x72]; // 72
};
RED4EXT_ASSERT_SIZE(NewThreat, 0x78);
} // namespace AI
using AINewThreat = AI::NewThreat;
using NewThreat = AI::NewThreat;
} // namespace RED4ext

// clang-format on
