#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/ent/VertexAnimationMapperDestination.hpp>
#include <RED4ext/Types/generated/ent/VertexAnimationMapperSource.hpp>

namespace RED4ext
{
namespace ent { 
struct VertexAnimationMapperEntry
{
    static constexpr const char* NAME = "entVertexAnimationMapperEntry";
    static constexpr const char* ALIAS = NAME;

    alignas(8) StaticArray<ent::VertexAnimationMapperSource, 4> sources; // 00
    uint8_t unkA8[0xB0 - 0xA8]; // A8
    ent::VertexAnimationMapperDestination destination; // B0
};
RED4EXT_ASSERT_SIZE(VertexAnimationMapperEntry, 0xD0);
} // namespace ent
} // namespace RED4ext
