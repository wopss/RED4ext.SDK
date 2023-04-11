#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/SpotInstance.hpp>

namespace RED4ext
{
namespace AI
{
struct SmartSpotInstance : AI::SpotInstance
{
    static constexpr const char* NAME = "AISmartSpotInstance";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(SmartSpotInstance, 0x18);
} // namespace AI
using AISmartSpotInstance = AI::SmartSpotInstance;
} // namespace RED4ext

// clang-format on
