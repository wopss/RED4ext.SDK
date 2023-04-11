#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/EntityUserComponentResolutionMode.hpp>

namespace RED4ext
{
namespace ent { struct EntityTemplate; }

namespace ent
{
struct EntityUserComponentResolution
{
    static constexpr const char* NAME = "entEntityUserComponentResolution";
    static constexpr const char* ALIAS = NAME;

    CRUID id; // 00
    RaRef<ent::EntityTemplate> include; // 08
    ent::EntityUserComponentResolutionMode mode; // 10
    uint8_t unk11[0x18 - 0x11]; // 11
};
RED4EXT_ASSERT_SIZE(EntityUserComponentResolution, 0x18);
} // namespace ent
using entEntityUserComponentResolution = ent::EntityUserComponentResolution;
} // namespace RED4ext

// clang-format on
