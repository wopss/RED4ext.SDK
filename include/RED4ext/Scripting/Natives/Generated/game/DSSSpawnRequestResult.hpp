#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>

namespace RED4ext
{
namespace game { struct Object; }

namespace game
{
struct DSSSpawnRequestResult
{
    static constexpr const char* NAME = "gameDSSSpawnRequestResult";
    static constexpr const char* ALIAS = "DSSSpawnRequestResult";

    uint32_t requestID; // 00
    bool success; // 04
    uint8_t unk05[0x8 - 0x5]; // 5
    DynArray<WeakHandle<game::Object>> spawnedObjects; // 08
};
RED4EXT_ASSERT_SIZE(DSSSpawnRequestResult, 0x18);
} // namespace game
using gameDSSSpawnRequestResult = game::DSSSpawnRequestResult;
using DSSSpawnRequestResult = game::DSSSpawnRequestResult;
} // namespace RED4ext

// clang-format on
