#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/IRuntimeSystem.hpp>

namespace RED4ext
{
namespace world
{
struct RuntimeSystemRemoteViews : world::IRuntimeSystem
{
    static constexpr const char* NAME = "worldRuntimeSystemRemoteViews";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x68 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(RuntimeSystemRemoteViews, 0x68);
} // namespace world
using worldRuntimeSystemRemoteViews = world::RuntimeSystemRemoteViews;
} // namespace RED4ext

// clang-format on
