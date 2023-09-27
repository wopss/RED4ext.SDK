#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/TriggerAreaNode.hpp>

namespace RED4ext
{
namespace world
{
struct AudioSignpostTriggerNode : world::TriggerAreaNode
{
    static constexpr const char* NAME = "worldAudioSignpostTriggerNode";
    static constexpr const char* ALIAS = NAME;

    CName enterSignpost; // 70
    CName exitSignpost; // 78
    CName reEnterSignpost; // 80
    CName preExitSignpost; // 88
    float exitCooldown; // 90
    uint8_t unk94[0x98 - 0x94]; // 94
};
RED4EXT_ASSERT_SIZE(AudioSignpostTriggerNode, 0x98);
} // namespace world
using worldAudioSignpostTriggerNode = world::AudioSignpostTriggerNode;
} // namespace RED4ext

// clang-format on
