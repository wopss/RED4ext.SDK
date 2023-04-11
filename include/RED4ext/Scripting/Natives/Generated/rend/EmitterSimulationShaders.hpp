#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace rend
{
struct EmitterSimulationShaders
{
    static constexpr const char* NAME = "rendEmitterSimulationShaders";
    static constexpr const char* ALIAS = NAME;

    NativeArray<DataBuffer, 2> simCS; // 00
};
RED4EXT_ASSERT_SIZE(EmitterSimulationShaders, 0x50);
} // namespace rend
using rendEmitterSimulationShaders = rend::EmitterSimulationShaders;
} // namespace RED4ext

// clang-format on
