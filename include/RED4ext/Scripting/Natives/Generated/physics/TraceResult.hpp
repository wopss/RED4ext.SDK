#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>

namespace RED4ext
{
namespace physics { 
struct TraceResult
{
    static constexpr const char* NAME = "physicsTraceResult";
    static constexpr const char* ALIAS = "TraceResult";

    Vector3 position; // 00
    Vector3 normal; // 0C
    CName material; // 18
    uint8_t unk20[0x60 - 0x20]; // 20
};
RED4EXT_ASSERT_SIZE(TraceResult, 0x60);
} // namespace physics
using TraceResult = physics::TraceResult;
} // namespace RED4ext
