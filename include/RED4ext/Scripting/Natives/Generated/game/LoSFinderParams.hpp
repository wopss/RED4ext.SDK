#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game { 
struct LoSFinderParams : IScriptable
{
    static constexpr const char* NAME = "gameLoSFinderParams";
    static constexpr const char* ALIAS = "LoSFinderParams";

    uint8_t unk40[0x70 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(LoSFinderParams, 0x70);
} // namespace game
using LoSFinderParams = game::LoSFinderParams;
} // namespace RED4ext
