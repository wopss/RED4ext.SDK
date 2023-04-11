#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectObjectProvider.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/QueryPreset.hpp>

namespace RED4ext
{
namespace physics { struct FilterData; }

namespace game
{
struct EffectObjectProvider_SingleRicochetTarget : game::EffectObjectProvider
{
    static constexpr const char* NAME = "gameEffectObjectProvider_SingleRicochetTarget";
    static constexpr const char* ALIAS = NAME;

    Handle<physics::FilterData> filterData; // 40
    physics::QueryPreset queryPreset; // 50
    uint8_t unk58[0x68 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(EffectObjectProvider_SingleRicochetTarget, 0x68);
} // namespace game
using gameEffectObjectProvider_SingleRicochetTarget = game::EffectObjectProvider_SingleRicochetTarget;
} // namespace RED4ext

// clang-format on
