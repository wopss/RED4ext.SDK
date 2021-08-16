#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IObjectScriptBase.hpp>

namespace RED4ext
{
namespace game { 
struct ActionScript : game::IObjectScriptBase
{
    static constexpr const char* NAME = "gameActionScript";
    static constexpr const char* ALIAS = "ActionScript";

    uint32_t actionFlags; // 60
    uint8_t unk64[0x68 - 0x64]; // 64
};
RED4EXT_ASSERT_SIZE(ActionScript, 0x68);
} // namespace game
using ActionScript = game::ActionScript;
} // namespace RED4ext
