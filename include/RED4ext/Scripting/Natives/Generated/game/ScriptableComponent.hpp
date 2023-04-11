#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Component.hpp>

namespace RED4ext
{
namespace game
{
struct ScriptableComponent : game::Component
{
    static constexpr const char* NAME = "gameScriptableComponent";
    static constexpr const char* ALIAS = "ScriptableComponent";

    uint8_t unkA8[0xB0 - 0xA8]; // A8
    uint32_t priority; // B0
    uint8_t unkB4[0xB8 - 0xB4]; // B4
};
RED4EXT_ASSERT_SIZE(ScriptableComponent, 0xB8);
} // namespace game
using gameScriptableComponent = game::ScriptableComponent;
using ScriptableComponent = game::ScriptableComponent;
} // namespace RED4ext

// clang-format on
