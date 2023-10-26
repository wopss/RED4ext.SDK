#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Transform.hpp>

namespace RED4ext
{
namespace scn::prv
{
struct __declspec(align(0x10)) SpawnDespawnItem
{
    static constexpr const char* NAME = "scnprvSpawnDespawnItem";
    static constexpr const char* ALIAS = NAME;

    TweakDBID recordID; // 00
    uint8_t unk08[0x10 - 0x8]; // 8
    Transform finalTransform; // 10
};
RED4EXT_ASSERT_SIZE(SpawnDespawnItem, 0x30);
} // namespace scn::prv
using scnprvSpawnDespawnItem = scn::prv::SpawnDespawnItem;
} // namespace RED4ext

// clang-format on
