#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/ITriggerAreaNotifer.hpp>

namespace RED4ext
{
namespace world
{
struct PerformanceAreaNotifier : world::ITriggerAreaNotifer
{
    static constexpr const char* NAME = "worldPerformanceAreaNotifier";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(PerformanceAreaNotifier, 0xB8);
} // namespace world
using worldPerformanceAreaNotifier = world::PerformanceAreaNotifier;
} // namespace RED4ext

// clang-format on
