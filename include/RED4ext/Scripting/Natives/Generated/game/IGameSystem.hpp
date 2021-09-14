#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game { 
struct IGameSystem : IScriptable
{
    static constexpr const char* NAME = "gameIGameSystem";
    static constexpr const char* ALIAS = "IGameSystem";

    uint8_t unk40[0x48 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(IGameSystem, 0x48);
} // namespace game
using IGameSystem = game::IGameSystem;
} // namespace RED4ext
