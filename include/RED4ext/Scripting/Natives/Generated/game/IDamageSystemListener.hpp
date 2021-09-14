#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game { 
struct IDamageSystemListener : IScriptable
{
    static constexpr const char* NAME = "gameIDamageSystemListener";
    static constexpr const char* ALIAS = "IDamageSystemListener";

    uint8_t unk40[0x50 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(IDamageSystemListener, 0x50);
} // namespace game
using IDamageSystemListener = game::IDamageSystemListener;
} // namespace RED4ext
