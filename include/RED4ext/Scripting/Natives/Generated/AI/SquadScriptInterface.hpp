#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace AI
{
struct SquadScriptInterface : IScriptable
{
    static constexpr const char* NAME = "AISquadScriptInterface";
    static constexpr const char* ALIAS = "SquadScriptInterface";

    uint8_t unk40[0x58 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(SquadScriptInterface, 0x58);
} // namespace AI
using AISquadScriptInterface = AI::SquadScriptInterface;
using SquadScriptInterface = AI::SquadScriptInterface;
} // namespace RED4ext

// clang-format on
