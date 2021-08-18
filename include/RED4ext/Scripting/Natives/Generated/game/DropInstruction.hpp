#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace game { 
struct DropInstruction
{
    static constexpr const char* NAME = "gameDropInstruction";
    static constexpr const char* ALIAS = "DropInstruction";

    ItemID itemID; // 00
    int32_t quantity; // 10
};
RED4EXT_ASSERT_SIZE(DropInstruction, 0x14);
} // namespace game
using DropInstruction = game::DropInstruction;
} // namespace RED4ext
