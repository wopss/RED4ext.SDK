#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/game/AlwaysSpawnedState.hpp>
#include <RED4ext/Types/generated/game/Object.hpp>

namespace RED4ext
{
namespace dbg { 
struct Spawner : game::Object
{
    static constexpr const char* NAME = "dbgSpawner";
    static constexpr const char* ALIAS = NAME;

    CName appearance; // 228
    TweakDBID objectRecordId; // 230
    bool isActive; // 238
    game::AlwaysSpawnedState alwaysSpawned; // 239
    uint8_t unk23A[0x240 - 0x23A]; // 23A
};
RED4EXT_ASSERT_SIZE(Spawner, 0x240);
} // namespace dbg
} // namespace RED4ext
