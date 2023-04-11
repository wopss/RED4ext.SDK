#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/ArgumentDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/ArgumentType.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>

namespace RED4ext
{
namespace AI
{
struct ArgumentPuppetRefValue : AI::ArgumentDefinition
{
    static constexpr const char* NAME = "AIArgumentPuppetRefValue";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference defaultValue; // 48
    AI::ArgumentType type; // 80
    uint8_t unk84[0x88 - 0x84]; // 84
};
RED4EXT_ASSERT_SIZE(ArgumentPuppetRefValue, 0x88);
} // namespace AI
using AIArgumentPuppetRefValue = AI::ArgumentPuppetRefValue;
} // namespace RED4ext

// clang-format on
