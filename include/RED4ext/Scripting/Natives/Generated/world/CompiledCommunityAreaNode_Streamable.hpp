#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/CompiledCommunityAreaNode.hpp>

namespace RED4ext
{
namespace world
{
struct CompiledCommunityAreaNode_Streamable : world::CompiledCommunityAreaNode
{
    static constexpr const char* NAME = "worldCompiledCommunityAreaNode_Streamable";
    static constexpr const char* ALIAS = NAME;

    float streamingDistance; // 50
    uint8_t unk54[0x58 - 0x54]; // 54
};
RED4EXT_ASSERT_SIZE(CompiledCommunityAreaNode_Streamable, 0x58);
} // namespace world
using worldCompiledCommunityAreaNode_Streamable = world::CompiledCommunityAreaNode_Streamable;
} // namespace RED4ext

// clang-format on
