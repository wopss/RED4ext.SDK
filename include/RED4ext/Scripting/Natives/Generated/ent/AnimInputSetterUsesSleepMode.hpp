#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ent
{
struct AnimInputSetterUsesSleepMode : red::Event
{
    static constexpr const char* NAME = "entAnimInputSetterUsesSleepMode";
    static constexpr const char* ALIAS = "AnimInputSetterUsesSleepMode";

    bool value; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
};
RED4EXT_ASSERT_SIZE(AnimInputSetterUsesSleepMode, 0x48);
} // namespace ent
using entAnimInputSetterUsesSleepMode = ent::AnimInputSetterUsesSleepMode;
using AnimInputSetterUsesSleepMode = ent::AnimInputSetterUsesSleepMode;
} // namespace RED4ext

// clang-format on
