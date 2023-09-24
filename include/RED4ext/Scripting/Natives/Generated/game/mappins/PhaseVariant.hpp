#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/MappinPhase.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/MappinVariant.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/mappins/IPointOfInterestVariant.hpp>

namespace RED4ext
{
namespace game::mappins
{
struct PhaseVariant : game::mappins::IPointOfInterestVariant
{
    static constexpr const char* NAME = "gamemappinsPhaseVariant";
    static constexpr const char* ALIAS = NAME;

    game::data::MappinPhase phase; // 30
    game::data::MappinVariant variant; // 34
};
RED4EXT_ASSERT_SIZE(PhaseVariant, 0x38);
} // namespace game::mappins
using gamemappinsPhaseVariant = game::mappins::PhaseVariant;
} // namespace RED4ext

// clang-format on
