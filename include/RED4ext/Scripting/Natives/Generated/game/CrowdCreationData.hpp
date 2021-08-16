#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/CrowdPhaseTimePeriod.hpp>

namespace RED4ext
{
namespace game { 
struct CrowdCreationData
{
    static constexpr const char* NAME = "gameCrowdCreationData";
    static constexpr const char* ALIAS = NAME;

    alignas(8) StaticArray<game::CrowdPhaseTimePeriod, 4> timePeriods; // 00
};
RED4EXT_ASSERT_SIZE(CrowdCreationData, 0x128);
} // namespace game
} // namespace RED4ext
