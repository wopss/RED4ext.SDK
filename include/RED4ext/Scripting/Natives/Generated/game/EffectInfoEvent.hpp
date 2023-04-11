#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game
{
struct EffectInfoEvent : red::Event
{
    static constexpr const char* NAME = "gameEffectInfoEvent";
    static constexpr const char* ALIAS = "EffectInfoEvent";

    CString tag; // 40
    uint32_t entitiesGathered; // 60
    uint32_t entitiesFiltered; // 64
    uint32_t entitiesProcessed; // 68
    uint8_t unk6C[0x70 - 0x6C]; // 6C
};
RED4EXT_ASSERT_SIZE(EffectInfoEvent, 0x70);
} // namespace game
using gameEffectInfoEvent = game::EffectInfoEvent;
using EffectInfoEvent = game::EffectInfoEvent;
} // namespace RED4ext

// clang-format on
