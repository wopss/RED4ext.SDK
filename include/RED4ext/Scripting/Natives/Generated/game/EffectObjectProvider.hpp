#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectNode.hpp>

namespace RED4ext
{
namespace game
{
struct EffectObjectProvider : game::EffectNode
{
    static constexpr const char* NAME = "gameEffectObjectProvider";
    static constexpr const char* ALIAS = "EffectObjectProvider";

};
RED4EXT_ASSERT_SIZE(EffectObjectProvider, 0x40);
} // namespace game
using gameEffectObjectProvider = game::EffectObjectProvider;
using EffectObjectProvider = game::EffectObjectProvider;
} // namespace RED4ext

// clang-format on
