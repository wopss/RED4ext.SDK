#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/AudioAttractAreaNodeSettings.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/TriggerAreaNode.hpp>

namespace RED4ext
{
namespace world
{
struct AudioAttractAreaNode : world::TriggerAreaNode
{
    static constexpr const char* NAME = "worldAudioAttractAreaNode";
    static constexpr const char* ALIAS = NAME;

    NodeRef interestingConversationsNodeRef; // 70
    DynArray<world::AudioAttractAreaNodeSettings> audioAttractSoundSettings; // 78
};
RED4EXT_ASSERT_SIZE(AudioAttractAreaNode, 0x88);
} // namespace world
using worldAudioAttractAreaNode = world::AudioAttractAreaNode;
} // namespace RED4ext

// clang-format on
