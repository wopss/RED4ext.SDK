#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/VertexAnimationMapperEntry.hpp>

namespace RED4ext
{
namespace ent
{
struct VertexAnimationMapper
{
    static constexpr const char* NAME = "entVertexAnimationMapper";
    static constexpr const char* ALIAS = NAME;

    DynArray<ent::VertexAnimationMapperEntry> entries; // 00
};
RED4EXT_ASSERT_SIZE(VertexAnimationMapper, 0x10);
} // namespace ent
using entVertexAnimationMapper = ent::VertexAnimationMapper;
} // namespace RED4ext

// clang-format on
