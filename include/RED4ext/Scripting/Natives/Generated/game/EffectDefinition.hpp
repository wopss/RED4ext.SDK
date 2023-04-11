#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectDebugSettings.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectSettings.hpp>

namespace RED4ext
{
namespace game { struct EffectAction; }
namespace game { struct EffectDurationModifier; }
namespace game { struct EffectExecutor; }
namespace game { struct EffectObjectFilter; }
namespace game { struct EffectObjectProvider; }
namespace game { struct EffectPostAction; }
namespace game { struct EffectPreAction; }

namespace game
{
struct EffectDefinition
{
    static constexpr const char* NAME = "gameEffectDefinition";
    static constexpr const char* ALIAS = NAME;

    CName tag; // 00
    DynArray<Handle<game::EffectObjectProvider>> objectProviders; // 08
    DynArray<Handle<game::EffectObjectFilter>> objectFilters; // 18
    DynArray<Handle<game::EffectExecutor>> effectExecutors; // 28
    DynArray<Handle<game::EffectDurationModifier>> durationModifiers; // 38
    DynArray<Handle<game::EffectPreAction>> preActions; // 48
    DynArray<Handle<game::EffectPostAction>> postActions; // 58
    DynArray<Handle<game::EffectAction>> noTargetsActions; // 68
    game::EffectSettings settings; // 78
    game::EffectDebugSettings debugSettings; // 84
};
RED4EXT_ASSERT_SIZE(EffectDefinition, 0x90);
} // namespace game
using gameEffectDefinition = game::EffectDefinition;
} // namespace RED4ext

// clang-format on
