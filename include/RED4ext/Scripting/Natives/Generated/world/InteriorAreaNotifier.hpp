#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/ITriggerAreaNotifer.hpp>

namespace RED4ext
{
namespace world
{
struct InteriorAreaNotifier : world::ITriggerAreaNotifer
{
    static constexpr const char* NAME = "worldInteriorAreaNotifier";
    static constexpr const char* ALIAS = NAME;

    DynArray<TweakDBID> gameRestrictionIDs; // B8
    bool treatAsInterior; // C8
    bool setTier2; // C9
    uint8_t unkCA[0xD0 - 0xCA]; // CA
};
RED4EXT_ASSERT_SIZE(InteriorAreaNotifier, 0xD0);
} // namespace world
using worldInteriorAreaNotifier = world::InteriorAreaNotifier;
} // namespace RED4ext

// clang-format on
