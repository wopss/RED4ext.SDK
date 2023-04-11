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
struct ScriptableSystemRequest : IScriptable
{
    static constexpr const char* NAME = "gameScriptableSystemRequest";
    static constexpr const char* ALIAS = "ScriptableSystemRequest";

    uint8_t unk40[0x48 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(ScriptableSystemRequest, 0x48);
} // namespace game
using gameScriptableSystemRequest = game::ScriptableSystemRequest;
using ScriptableSystemRequest = game::ScriptableSystemRequest;
} // namespace RED4ext

// clang-format on
