#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game::influence
{
struct IAgent
{
    static constexpr const char* NAME = "gameinfluenceIAgent";
    static constexpr const char* ALIAS = "IAgent";

    uint8_t unk00[0x8 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(IAgent, 0x8);
} // namespace game::influence
using gameinfluenceIAgent = game::influence::IAgent;
using IAgent = game::influence::IAgent;
} // namespace RED4ext

// clang-format on
