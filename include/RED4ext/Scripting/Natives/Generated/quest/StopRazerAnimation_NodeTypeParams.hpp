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
struct StopRazerAnimation_NodeTypeParams
{
    static constexpr const char* NAME = "questStopRazerAnimation_NodeTypeParams";
    static constexpr const char* ALIAS = NAME;

    CName animationName; // 00
};
RED4EXT_ASSERT_SIZE(StopRazerAnimation_NodeTypeParams, 0x8);
} // namespace quest
using questStopRazerAnimation_NodeTypeParams = quest::StopRazerAnimation_NodeTypeParams;
} // namespace RED4ext

// clang-format on
