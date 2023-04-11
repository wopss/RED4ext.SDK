#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectExecutor_KatanaBulletBendingEffectEntry.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectExecutor_Scripted.hpp>

namespace RED4ext
{
namespace game
{
struct EffectExecutor_KatanaBulletBending : game::EffectExecutor_Scripted
{
    static constexpr const char* NAME = "gameEffectExecutor_KatanaBulletBending";
    static constexpr const char* ALIAS = NAME;

    DynArray<game::EffectExecutor_KatanaBulletBendingEffectEntry> effects; // 48
};
RED4EXT_ASSERT_SIZE(EffectExecutor_KatanaBulletBending, 0x58);
} // namespace game
using gameEffectExecutor_KatanaBulletBending = game::EffectExecutor_KatanaBulletBending;
} // namespace RED4ext

// clang-format on
