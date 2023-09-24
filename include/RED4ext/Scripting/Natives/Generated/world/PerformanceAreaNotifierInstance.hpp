#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/ITriggerAreaNotiferInstance.hpp>

namespace RED4ext
{
namespace world
{
struct PerformanceAreaNotifierInstance : world::ITriggerAreaNotiferInstance
{
    static constexpr const char* NAME = "worldPerformanceAreaNotifierInstance";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk58[0x90 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(PerformanceAreaNotifierInstance, 0x90);
} // namespace world
using worldPerformanceAreaNotifierInstance = world::PerformanceAreaNotifierInstance;
} // namespace RED4ext

// clang-format on
