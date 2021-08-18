#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>

namespace RED4ext
{
struct CResource;
namespace world { struct StreamingSectorInplaceContent; }

namespace world { 
struct StreamingSector : CResource
{
    static constexpr const char* NAME = "worldStreamingSector";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0xA0 - 0x40]; // 40
    DynArray<Ref<CResource>> localInplaceResource; // A0
    uint8_t unkB0[0xC0 - 0xB0]; // B0
    RaRef<world::StreamingSectorInplaceContent> externInplaceResource; // C0
    uint8_t unkC8[0x130 - 0xC8]; // C8
    uint8_t level; // 130
    int8_t category; // 131
    uint8_t unk132[0x138 - 0x132]; // 132
};
RED4EXT_ASSERT_SIZE(StreamingSector, 0x138);
} // namespace world
} // namespace RED4ext
