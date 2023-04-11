#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/RelativeNodePath.hpp>

namespace RED4ext
{
namespace world
{
struct PersistentSnapData
{
    static constexpr const char* NAME = "worldPersistentSnapData";
    static constexpr const char* ALIAS = NAME;

    world::RelativeNodePath targetObjectPath; // 00
    CName targetSocketName; // 18
    bool snapTangent; // 20
    bool reverseTangent; // 21
    bool preserveLength; // 22
    uint8_t unk23[0x28 - 0x23]; // 23
};
RED4EXT_ASSERT_SIZE(PersistentSnapData, 0x28);
} // namespace world
using worldPersistentSnapData = world::PersistentSnapData;
} // namespace RED4ext

// clang-format on
