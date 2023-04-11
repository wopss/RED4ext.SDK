#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/community/TimePeriod.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/SpotSequenceCategory.hpp>

namespace RED4ext
{
namespace community
{
struct PhaseTimePeriod : community::TimePeriod
{
    static constexpr const char* NAME = "communityPhaseTimePeriod";
    static constexpr const char* ALIAS = NAME;

    DynArray<CName> markings; // 10
    DynArray<NodeRef> spotNodeRefs; // 20
    DynArray<game::SpotSequenceCategory> categories; // 30
    bool isSequence; // 40
    uint8_t unk41[0x42 - 0x41]; // 41
    uint16_t quantity; // 42
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(PhaseTimePeriod, 0x48);
} // namespace community
using communityPhaseTimePeriod = community::PhaseTimePeriod;
} // namespace RED4ext

// clang-format on
