#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game { 
struct PersistentState : IScriptable
{
    static constexpr const char* NAME = "gamePersistentState";
    static constexpr const char* ALIAS = "PersistentState";

    uint8_t unk40[0x68 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(PersistentState, 0x68);
} // namespace game
using PersistentState = game::PersistentState;
} // namespace RED4ext
