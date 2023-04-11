#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>

namespace RED4ext
{
namespace game
{
struct JoinTrafficNPCContext
{
    static constexpr const char* NAME = "gameJoinTrafficNPCContext";
    static constexpr const char* ALIAS = "JoinTrafficNPCContext";

    Vector3 startPosition; // 00
    Vector3 threatPosition; // 0C
    float threatRadius; // 18
    bool checkRoadIntersection; // 1C
    bool usePreviousPosition; // 1D
    uint8_t unk1E[0x20 - 0x1E]; // 1E
};
RED4EXT_ASSERT_SIZE(JoinTrafficNPCContext, 0x20);
} // namespace game
using gameJoinTrafficNPCContext = game::JoinTrafficNPCContext;
using JoinTrafficNPCContext = game::JoinTrafficNPCContext;
} // namespace RED4ext

// clang-format on
