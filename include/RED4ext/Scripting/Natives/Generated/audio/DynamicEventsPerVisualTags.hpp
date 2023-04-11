#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/DynamicEventsWithInterval.hpp>

namespace RED4ext
{
namespace audio
{
struct DynamicEventsPerVisualTags
{
    static constexpr const char* NAME = "audioDynamicEventsPerVisualTags";
    static constexpr const char* ALIAS = NAME;

    DynArray<CName> visualTags; // 00
    DynArray<audio::DynamicEventsWithInterval> grunts; // 10
};
RED4EXT_ASSERT_SIZE(DynamicEventsPerVisualTags, 0x20);
} // namespace audio
using audioDynamicEventsPerVisualTags = audio::DynamicEventsPerVisualTags;
} // namespace RED4ext

// clang-format on
