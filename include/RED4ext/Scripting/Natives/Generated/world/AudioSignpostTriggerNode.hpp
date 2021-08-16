#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/TriggerAreaNode.hpp>

namespace RED4ext
{
namespace world { 
struct AudioSignpostTriggerNode : world::TriggerAreaNode
{
    static constexpr const char* NAME = "worldAudioSignpostTriggerNode";
    static constexpr const char* ALIAS = NAME;

    CName enterSignpost; // 70
    CName exitSignpost; // 78
    float exitCooldown; // 80
    uint8_t unk84[0x88 - 0x84]; // 84
};
RED4EXT_ASSERT_SIZE(AudioSignpostTriggerNode, 0x88);
} // namespace world
} // namespace RED4ext
