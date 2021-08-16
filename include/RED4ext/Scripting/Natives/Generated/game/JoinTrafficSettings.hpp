#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace game { 
struct JoinTrafficSettings : ISerializable
{
    static constexpr const char* NAME = "gameJoinTrafficSettings";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x90 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(JoinTrafficSettings, 0x90);
} // namespace game
} // namespace RED4ext
