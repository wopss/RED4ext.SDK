#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game
{
struct ScriptedPrereqSceneInspectionListenerWrapper : IScriptable
{
    static constexpr const char* NAME = "gameScriptedPrereqSceneInspectionListenerWrapper";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x70 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(ScriptedPrereqSceneInspectionListenerWrapper, 0x70);
} // namespace game
using gameScriptedPrereqSceneInspectionListenerWrapper = game::ScriptedPrereqSceneInspectionListenerWrapper;
} // namespace RED4ext

// clang-format on
