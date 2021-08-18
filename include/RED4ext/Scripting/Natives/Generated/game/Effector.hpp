#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game { 
struct Effector : IScriptable
{
    static constexpr const char* NAME = "gameEffector";
    static constexpr const char* ALIAS = "Effector";

    uint8_t unk40[0xA0 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(Effector, 0xA0);
} // namespace game
using Effector = game::Effector;
} // namespace RED4ext
