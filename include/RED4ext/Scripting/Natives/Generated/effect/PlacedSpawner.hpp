#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/effect/Spawner.hpp>

namespace RED4ext
{
namespace effect { struct IPlacementEntries; }

namespace effect
{
struct PlacedSpawner : effect::Spawner
{
    static constexpr const char* NAME = "effectPlacedSpawner";
    static constexpr const char* ALIAS = NAME;

    Handle<effect::IPlacementEntries> placement; // 30
};
RED4EXT_ASSERT_SIZE(PlacedSpawner, 0x40);
} // namespace effect
using effectPlacedSpawner = effect::PlacedSpawner;
} // namespace RED4ext

// clang-format on
