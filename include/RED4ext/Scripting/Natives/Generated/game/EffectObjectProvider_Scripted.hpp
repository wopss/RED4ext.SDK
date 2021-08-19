#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectObjectProvider.hpp>

namespace RED4ext
{
namespace game { 
struct EffectObjectProvider_Scripted : game::EffectObjectProvider
{
    static constexpr const char* NAME = "gameEffectObjectProvider_Scripted";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(EffectObjectProvider_Scripted, 0x40);
} // namespace game
} // namespace RED4ext
