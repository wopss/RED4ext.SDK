#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace quest
{
struct ScriptQuestContentLockListener : IScriptable
{
    static constexpr const char* NAME = "questScriptQuestContentLockListener";
    static constexpr const char* ALIAS = "ScriptQuestContentLockListener";

    uint8_t unk40[0x50 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(ScriptQuestContentLockListener, 0x50);
} // namespace quest
using questScriptQuestContentLockListener = quest::ScriptQuestContentLockListener;
using ScriptQuestContentLockListener = quest::ScriptQuestContentLockListener;
} // namespace RED4ext

// clang-format on
