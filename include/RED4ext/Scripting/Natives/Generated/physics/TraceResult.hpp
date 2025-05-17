#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <RED4ext/Scripting/Natives/physicsTraceResult.hpp>

namespace RED4ext
{
RED4EXT_ASSERT_SIZE(physics::TraceResult, 0x60);
using physicsTraceResult = physics::TraceResult;
using TraceResult = physics::TraceResult;
} // namespace RED4ext

/*
#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>

namespace RED4ext
{
namespace physics
{
struct __declspec(align(0x10)) TraceResult
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
using physicsTraceResult = physics::TraceResult;
using TraceResult = physics::TraceResult;
} // namespace RED4ext
*/

// clang-format on
