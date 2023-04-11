#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/EntityID.hpp>

namespace RED4ext
{
namespace prv
{
struct FunctionalTestQueryOverlapResult
{
    static constexpr const char* NAME = "prvFunctionalTestQueryOverlapResult";
    static constexpr const char* ALIAS = "FunctionalTestQueryOverlapResult";

    ent::EntityID entityID; // 00
    Vector3 position; // 08
    uint8_t unk14[0x18 - 0x14]; // 14
};
RED4EXT_ASSERT_SIZE(FunctionalTestQueryOverlapResult, 0x18);
} // namespace prv
using prvFunctionalTestQueryOverlapResult = prv::FunctionalTestQueryOverlapResult;
using FunctionalTestQueryOverlapResult = prv::FunctionalTestQueryOverlapResult;
} // namespace RED4ext

// clang-format on
