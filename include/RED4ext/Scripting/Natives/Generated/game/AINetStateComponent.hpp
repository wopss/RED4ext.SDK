#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ScriptableComponent.hpp>

namespace RED4ext
{
namespace game
{
struct AINetStateComponent : game::ScriptableComponent
{
    static constexpr const char* NAME = "gameAINetStateComponent";
    static constexpr const char* ALIAS = "AINetStateComponent";

    uint8_t unkB8[0x118 - 0xB8]; // B8
};
RED4EXT_ASSERT_SIZE(AINetStateComponent, 0x118);
} // namespace game
using gameAINetStateComponent = game::AINetStateComponent;
using AINetStateComponent = game::AINetStateComponent;
} // namespace RED4ext

// clang-format on
