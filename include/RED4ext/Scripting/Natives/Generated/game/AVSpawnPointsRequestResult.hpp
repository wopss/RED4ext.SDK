#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>

namespace RED4ext
{
namespace game
{
struct AVSpawnPointsRequestResult
{
    static constexpr const char* NAME = "gameAVSpawnPointsRequestResult";
    static constexpr const char* ALIAS = "AVSpawnPointsRequestResult";

    uint32_t requestID; // 00
    bool success; // 04
    uint8_t unk05[0x8 - 0x5]; // 5
    DynArray<Vector3> spawnPoints; // 08
};
RED4EXT_ASSERT_SIZE(AVSpawnPointsRequestResult, 0x18);
} // namespace game
using gameAVSpawnPointsRequestResult = game::AVSpawnPointsRequestResult;
using AVSpawnPointsRequestResult = game::AVSpawnPointsRequestResult;
} // namespace RED4ext

// clang-format on
