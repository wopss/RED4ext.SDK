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
struct ScriptedPrereqMountingListenerWrapper : IScriptable
{
    static constexpr const char* NAME = "gameScriptedPrereqMountingListenerWrapper";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x70 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(ScriptedPrereqMountingListenerWrapper, 0x70);
} // namespace game
using gameScriptedPrereqMountingListenerWrapper = game::ScriptedPrereqMountingListenerWrapper;
} // namespace RED4ext

// clang-format on
