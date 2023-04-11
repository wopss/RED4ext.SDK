#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectObjectProvider.hpp>

namespace RED4ext
{
namespace game
{
struct EffectObjectProvider_Scripted : game::EffectObjectProvider
{
    static constexpr const char* NAME = "gameEffectObjectProvider_Scripted";
    static constexpr const char* ALIAS = "EffectObjectProvider_Scripted";

};
RED4EXT_ASSERT_SIZE(EffectObjectProvider_Scripted, 0x40);
} // namespace game
using gameEffectObjectProvider_Scripted = game::EffectObjectProvider_Scripted;
using EffectObjectProvider_Scripted = game::EffectObjectProvider_Scripted;
} // namespace RED4ext

// clang-format on
