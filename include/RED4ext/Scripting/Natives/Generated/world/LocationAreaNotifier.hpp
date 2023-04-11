#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/ITriggerAreaNotifer.hpp>

namespace RED4ext
{
namespace world
{
struct LocationAreaNotifier : world::ITriggerAreaNotifer
{
    static constexpr const char* NAME = "worldLocationAreaNotifier";
    static constexpr const char* ALIAS = NAME;

    TweakDBID districtID; // B8
    bool sendNewLocationNotification; // C0
    uint8_t unkC1[0xC8 - 0xC1]; // C1
};
RED4EXT_ASSERT_SIZE(LocationAreaNotifier, 0xC8);
} // namespace world
using worldLocationAreaNotifier = world::LocationAreaNotifier;
} // namespace RED4ext

// clang-format on
