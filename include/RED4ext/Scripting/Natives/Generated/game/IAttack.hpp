#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game { 
struct IAttack : IScriptable
{
    static constexpr const char* NAME = "gameIAttack";
    static constexpr const char* ALIAS = "IAttack";

    uint8_t unk40[0xD8 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(IAttack, 0xD8);
} // namespace game
using IAttack = game::IAttack;
} // namespace RED4ext
