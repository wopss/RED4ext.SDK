#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/SmartSpotInstance.hpp>

namespace RED4ext
{
namespace AI
{
struct __declspec(align(0x10)) ActionSpotInstance : AI::SmartSpotInstance
{
    static constexpr const char* NAME = "AIActionSpotInstance";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk18[0xB0 - 0x18]; // 18
};
RED4EXT_ASSERT_SIZE(ActionSpotInstance, 0xB0);
} // namespace AI
using AIActionSpotInstance = AI::ActionSpotInstance;
} // namespace RED4ext

// clang-format on
