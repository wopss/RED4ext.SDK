#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/StreamingSectorCategory.hpp>

namespace RED4ext
{
struct CResource;
namespace world { struct StreamingSectorInplaceContent; }

namespace world
{
struct StreamingSector : CResource
{
    static constexpr const char* NAME = "worldStreamingSector";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0xA8 - 0x40]; // 40
    DynArray<Ref<CResource>> localInplaceResource; // A8
    uint8_t unkB8[0xC8 - 0xB8]; // B8
    RaRef<world::StreamingSectorInplaceContent> externInplaceResource; // C8
    uint8_t unkD0[0xE0 - 0xD0]; // D0
    uint8_t level; // E0
    world::StreamingSectorCategory category; // E1
    uint8_t unkE2[0xE8 - 0xE2]; // E2
};
RED4EXT_ASSERT_SIZE(StreamingSector, 0xE8);
} // namespace world
using worldStreamingSector = world::StreamingSector;
} // namespace RED4ext

// clang-format on
