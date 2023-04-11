#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/VertexAnimationMapperSourceType.hpp>

namespace RED4ext
{
namespace ent
{
struct VertexAnimationMapperSource
{
    static constexpr const char* NAME = "entVertexAnimationMapperSource";
    static constexpr const char* ALIAS = NAME;

    ent::VertexAnimationMapperSourceType type; // 00
    uint8_t unk04[0x8 - 0x4]; // 4
    CName name; // 08
    uint8_t unk10[0x28 - 0x10]; // 10
};
RED4EXT_ASSERT_SIZE(VertexAnimationMapperSource, 0x28);
} // namespace ent
using entVertexAnimationMapperSource = ent::VertexAnimationMapperSource;
} // namespace RED4ext

// clang-format on
