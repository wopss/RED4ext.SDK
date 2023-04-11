#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace world
{
struct ScriptedAudioSignpostTrigger : IScriptable
{
    static constexpr const char* NAME = "worldScriptedAudioSignpostTrigger";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(ScriptedAudioSignpostTrigger, 0x40);
} // namespace world
using worldScriptedAudioSignpostTrigger = world::ScriptedAudioSignpostTrigger;
} // namespace RED4ext

// clang-format on
