#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace AI::behavior
{
struct EventHandler
{
    static constexpr const char* NAME = "AIbehaviorEventHandler";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x8 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(EventHandler, 0x8);
} // namespace AI::behavior
using AIbehaviorEventHandler = AI::behavior::EventHandler;
} // namespace RED4ext

// clang-format on
