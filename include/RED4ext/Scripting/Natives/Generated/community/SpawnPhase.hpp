#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/community/PhaseTimePeriod.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/AlwaysSpawnedState.hpp>

namespace RED4ext
{
namespace community
{
struct SpawnPhase : ISerializable
{
    static constexpr const char* NAME = "communitySpawnPhase";
    static constexpr const char* ALIAS = NAME;

    DynArray<community::PhaseTimePeriod> timePeriods; // 30
    DynArray<CName> appearances; // 40
    CName phaseName; // 50
    game::AlwaysSpawnedState alwaysSpawned; // 58
    bool prefetchAppearance; // 59
    uint8_t unk5A[0x60 - 0x5A]; // 5A
};
RED4EXT_ASSERT_SIZE(SpawnPhase, 0x60);
} // namespace community
using communitySpawnPhase = community::SpawnPhase;
} // namespace RED4ext

// clang-format on
