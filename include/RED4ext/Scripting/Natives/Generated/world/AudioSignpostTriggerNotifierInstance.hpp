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
struct AudioSignpostTriggerNotifierInstance : world::ITriggerAreaNotiferInstance
{
    static constexpr const char* NAME = "worldAudioSignpostTriggerNotifierInstance";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk58[0x68 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(AudioSignpostTriggerNotifierInstance, 0x68);
} // namespace world
using worldAudioSignpostTriggerNotifierInstance = world::AudioSignpostTriggerNotifierInstance;
} // namespace RED4ext

// clang-format on
