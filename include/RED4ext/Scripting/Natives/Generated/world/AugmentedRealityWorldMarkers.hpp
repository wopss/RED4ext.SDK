#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/Transform.hpp>

namespace RED4ext
{
namespace world { 
struct AugmentedRealityWorldMarkers : ISerializable
{
    static constexpr const char* NAME = "worldAugmentedRealityWorldMarkers";
    static constexpr const char* ALIAS = NAME;

    DynArray<Transform> transforms; // 30
};
RED4EXT_ASSERT_SIZE(AugmentedRealityWorldMarkers, 0x40);
} // namespace world
} // namespace RED4ext
