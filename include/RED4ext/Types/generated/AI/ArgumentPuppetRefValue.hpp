#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/AI/ArgumentDefinition.hpp>
#include <RED4ext/Types/generated/AI/ArgumentType.hpp>
#include <RED4ext/Types/generated/game/EntityReference.hpp>

namespace RED4ext
{
namespace AI { 
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
} // namespace RED4ext
