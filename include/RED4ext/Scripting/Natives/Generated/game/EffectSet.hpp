#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectDefinition.hpp>

namespace RED4ext
{
namespace game
{
struct EffectSet : CResource
{
    static constexpr const char* NAME = "gameEffectSet";
    static constexpr const char* ALIAS = NAME;

    DynArray<game::EffectDefinition> effects; // 40
};
RED4EXT_ASSERT_SIZE(EffectSet, 0x50);
} // namespace game
using gameEffectSet = game::EffectSet;
} // namespace RED4ext

// clang-format on
