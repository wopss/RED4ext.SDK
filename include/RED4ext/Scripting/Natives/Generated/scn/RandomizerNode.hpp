#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/RandomizerMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneGraphNode.hpp>

namespace RED4ext
{
namespace scn
{
struct RandomizerNode : scn::SceneGraphNode
{
    static constexpr const char* NAME = "scnRandomizerNode";
    static constexpr const char* ALIAS = NAME;

    scn::RandomizerMode mode; // 48
    uint8_t unk49[0x4C - 0x49]; // 49
    uint32_t numOutSockets; // 4C
    NativeArray<uint8_t, 32> weights; // 50
};
RED4EXT_ASSERT_SIZE(RandomizerNode, 0x70);
} // namespace scn
using scnRandomizerNode = scn::RandomizerNode;
} // namespace RED4ext

// clang-format on
