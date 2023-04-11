#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ObjectSpawnParameter.hpp>

namespace RED4ext
{
namespace population
{
struct PopulationSpawnParameter : game::ObjectSpawnParameter
{
    static constexpr const char* NAME = "populationPopulationSpawnParameter";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x40 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(PopulationSpawnParameter, 0x40);
} // namespace population
using populationPopulationSpawnParameter = population::PopulationSpawnParameter;
} // namespace RED4ext

// clang-format on
