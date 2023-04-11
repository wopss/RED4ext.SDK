#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IObjectScriptBase.hpp>

namespace RED4ext
{
namespace game
{
struct ActionScript : game::IObjectScriptBase
{
    static constexpr const char* NAME = "gameActionScript";
    static constexpr const char* ALIAS = "ActionScript";

    uint32_t actionFlags; // 58
    uint8_t unk5C[0x60 - 0x5C]; // 5C
};
RED4EXT_ASSERT_SIZE(ActionScript, 0x60);
} // namespace game
using gameActionScript = game::ActionScript;
using ActionScript = game::ActionScript;
} // namespace RED4ext

// clang-format on
