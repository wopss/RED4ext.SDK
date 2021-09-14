#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace game::influence { 
struct BumpAgent : ISerializable
{
    static constexpr const char* NAME = "gameinfluenceBumpAgent";
    static constexpr const char* ALIAS = "BumpAgent";

    uint8_t unk30[0x2B0 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(BumpAgent, 0x2B0);
} // namespace game::influence
using BumpAgent = game::influence::BumpAgent;
} // namespace RED4ext
