#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/Quaternion.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/CompiledEffectEventInfo.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/CompiledEffectPlacementInfo.hpp>

namespace RED4ext
{
namespace world
{
struct CompiledEffectInfo
{
    static constexpr const char* NAME = "worldCompiledEffectInfo";
    static constexpr const char* ALIAS = NAME;

    DynArray<CName> placementTags; // 00
    DynArray<CName> componentNames; // 10
    DynArray<Vector3> relativePositions; // 20
    DynArray<Quaternion> relativeRotations; // 30
    DynArray<world::CompiledEffectPlacementInfo> placementInfos; // 40
    DynArray<world::CompiledEffectEventInfo> eventsSortedByRUID; // 50
    uint8_t unk60[0x68 - 0x60]; // 60
};
RED4EXT_ASSERT_SIZE(CompiledEffectInfo, 0x68);
} // namespace world
using worldCompiledEffectInfo = world::CompiledEffectInfo;
} // namespace RED4ext

// clang-format on
