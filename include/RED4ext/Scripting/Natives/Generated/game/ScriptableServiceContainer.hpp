#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IGameSystem.hpp>

namespace RED4ext
{
namespace game
{
struct ScriptableServiceContainer : game::IGameSystem
{
    static constexpr const char* NAME = "gameScriptableServiceContainer";
    static constexpr const char* ALIAS = "ScriptableServiceContainer";

    uint8_t unk48[0x78 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(ScriptableServiceContainer, 0x78);
} // namespace game
using gameScriptableServiceContainer = game::ScriptableServiceContainer;
using ScriptableServiceContainer = game::ScriptableServiceContainer;
} // namespace RED4ext

// clang-format on
