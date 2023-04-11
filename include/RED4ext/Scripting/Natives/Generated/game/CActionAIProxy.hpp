#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game
{
struct CActionAIProxy
{
    static constexpr const char* NAME = "gameCActionAIProxy";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x40 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(CActionAIProxy, 0x40);
} // namespace game
using gameCActionAIProxy = game::CActionAIProxy;
} // namespace RED4ext

// clang-format on
