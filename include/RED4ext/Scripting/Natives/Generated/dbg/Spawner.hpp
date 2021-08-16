#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/AlwaysSpawnedState.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Object.hpp>

namespace RED4ext
{
namespace dbg { 
struct Spawner : game::Object
{
    static constexpr const char* NAME = "dbgSpawner";
    static constexpr const char* ALIAS = NAME;

    CName appearance; // 230
    TweakDBID objectRecordId; // 238
    bool isActive; // 240
    game::AlwaysSpawnedState alwaysSpawned; // 241
    uint8_t unk242[0x248 - 0x242]; // 242
};
RED4EXT_ASSERT_SIZE(Spawner, 0x248);
} // namespace dbg
} // namespace RED4ext
