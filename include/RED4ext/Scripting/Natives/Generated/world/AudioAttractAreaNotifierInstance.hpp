#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/ITriggerAreaNotiferInstance.hpp>

namespace RED4ext
{
namespace world
{
struct AudioAttractAreaNotifierInstance : world::ITriggerAreaNotiferInstance
{
    static constexpr const char* NAME = "worldAudioAttractAreaNotifierInstance";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(AudioAttractAreaNotifierInstance, 0x58);
} // namespace world
using worldAudioAttractAreaNotifierInstance = world::AudioAttractAreaNotifierInstance;
} // namespace RED4ext

// clang-format on
