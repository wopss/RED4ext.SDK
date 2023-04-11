#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>

namespace RED4ext
{
namespace world
{
struct AudioTagNode : world::Node
{
    static constexpr const char* NAME = "worldAudioTagNode";
    static constexpr const char* ALIAS = NAME;

    CName audioTag; // 38
    float radius; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(AudioTagNode, 0x48);
} // namespace world
using worldAudioTagNode = world::AudioTagNode;
} // namespace RED4ext

// clang-format on
