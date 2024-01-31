#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace quest
{
struct PlayRazerAnimation_NodeTypeParams
{
    static constexpr const char* NAME = "questPlayRazerAnimation_NodeTypeParams";
    static constexpr const char* ALIAS = NAME;

    CName animationName; // 00
    bool loop; // 08
    uint8_t unk09[0x10 - 0x9]; // 9
};
RED4EXT_ASSERT_SIZE(PlayRazerAnimation_NodeTypeParams, 0x10);
} // namespace quest
using questPlayRazerAnimation_NodeTypeParams = quest::PlayRazerAnimation_NodeTypeParams;
} // namespace RED4ext

// clang-format on
