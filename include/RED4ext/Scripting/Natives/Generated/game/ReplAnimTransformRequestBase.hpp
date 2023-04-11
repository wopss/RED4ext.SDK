#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/net/Time.hpp>

namespace RED4ext
{
namespace game
{
struct ReplAnimTransformRequestBase
{
    static constexpr const char* NAME = "gameReplAnimTransformRequestBase";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x8 - 0x0]; // 0
    net::Time applyServerTime; // 08
    uint8_t unk10[0x18 - 0x10]; // 10
};
RED4EXT_ASSERT_SIZE(ReplAnimTransformRequestBase, 0x18);
} // namespace game
using gameReplAnimTransformRequestBase = game::ReplAnimTransformRequestBase;
} // namespace RED4ext

// clang-format on
