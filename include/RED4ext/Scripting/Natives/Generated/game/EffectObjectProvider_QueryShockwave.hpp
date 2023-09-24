#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectObjectProvider_QuerySphere.hpp>

namespace RED4ext
{
namespace game
{
struct EffectObjectProvider_QueryShockwave : game::EffectObjectProvider_QuerySphere
{
    static constexpr const char* NAME = "gameEffectObjectProvider_QueryShockwave";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(EffectObjectProvider_QueryShockwave, 0x70);
} // namespace game
using gameEffectObjectProvider_QueryShockwave = game::EffectObjectProvider_QueryShockwave;
} // namespace RED4ext

// clang-format on
