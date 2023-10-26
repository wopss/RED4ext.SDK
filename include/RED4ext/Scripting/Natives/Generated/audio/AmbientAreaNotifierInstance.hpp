#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/ITriggerAreaNotiferInstance.hpp>

namespace RED4ext
{
namespace audio
{
struct __declspec(align(0x10)) AmbientAreaNotifierInstance : world::ITriggerAreaNotiferInstance
{
    static constexpr const char* NAME = "audioAmbientAreaNotifierInstance";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk58[0x100 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(AmbientAreaNotifierInstance, 0x100);
} // namespace audio
using audioAmbientAreaNotifierInstance = audio::AmbientAreaNotifierInstance;
} // namespace RED4ext

// clang-format on
