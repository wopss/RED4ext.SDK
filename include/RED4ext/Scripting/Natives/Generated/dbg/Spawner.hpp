#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/AlwaysSpawnedState.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Object.hpp>

namespace RED4ext
{
namespace dbg
{
struct Spawner : game::Object
{
    static constexpr const char* NAME = "dbgSpawner";
    static constexpr const char* ALIAS = NAME;

    CName appearance; // 240
    TweakDBID objectRecordId; // 248
    bool isActive; // 250
    game::AlwaysSpawnedState alwaysSpawned; // 251
    uint8_t unk252[0x258 - 0x252]; // 252
};
RED4EXT_ASSERT_SIZE(Spawner, 0x258);
} // namespace dbg
using dbgSpawner = dbg::Spawner;
} // namespace RED4ext

// clang-format on
