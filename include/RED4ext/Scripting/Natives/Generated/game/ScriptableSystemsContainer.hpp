#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IScriptableSystemsContainer.hpp>

namespace RED4ext
{
namespace game
{
struct ScriptableSystemsContainer : game::IScriptableSystemsContainer
{
    static constexpr const char* NAME = "gameScriptableSystemsContainer";
    static constexpr const char* ALIAS = "ScriptableSystemsContainer";

    uint8_t unk48[0xA0 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(ScriptableSystemsContainer, 0xA0);
} // namespace game
using gameScriptableSystemsContainer = game::ScriptableSystemsContainer;
using ScriptableSystemsContainer = game::ScriptableSystemsContainer;
} // namespace RED4ext

// clang-format on
