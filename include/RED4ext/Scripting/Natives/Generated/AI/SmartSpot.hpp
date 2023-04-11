#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/Spot.hpp>

namespace RED4ext
{
namespace AI
{
struct SmartSpot : AI::Spot
{
    static constexpr const char* NAME = "AISmartSpot";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(SmartSpot, 0x30);
} // namespace AI
using AISmartSpot = AI::SmartSpot;
} // namespace RED4ext

// clang-format on
