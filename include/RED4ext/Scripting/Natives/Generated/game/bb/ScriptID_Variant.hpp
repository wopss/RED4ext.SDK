#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/bb/ScriptID.hpp>

namespace RED4ext
{
namespace game::bb
{
struct ScriptID_Variant : game::bb::ScriptID
{
    static constexpr const char* NAME = "gamebbScriptID_Variant";
    static constexpr const char* ALIAS = "BlackboardID_Variant";

};
RED4EXT_ASSERT_SIZE(ScriptID_Variant, 0x10);
} // namespace game::bb
using gamebbScriptID_Variant = game::bb::ScriptID_Variant;
using BlackboardID_Variant = game::bb::ScriptID_Variant;
} // namespace RED4ext

// clang-format on
