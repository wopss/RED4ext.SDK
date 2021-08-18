#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/MappinPhase.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/MappinVariant.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/mappins/IPointOfInterestVariant.hpp>

namespace RED4ext
{
namespace game::mappins { 
struct PhaseVariant : game::mappins::IPointOfInterestVariant
{
    static constexpr const char* NAME = "gamemappinsPhaseVariant";
    static constexpr const char* ALIAS = NAME;

    game::data::MappinPhase phase; // 38
    game::data::MappinVariant variant; // 3C
};
RED4EXT_ASSERT_SIZE(PhaseVariant, 0x40);
} // namespace game::mappins
} // namespace RED4ext
