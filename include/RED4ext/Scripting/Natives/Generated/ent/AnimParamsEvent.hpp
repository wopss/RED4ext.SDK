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
struct AnimParamsEvent : red::Event
{
    static constexpr const char* NAME = "entAnimParamsEvent";
    static constexpr const char* ALIAS = "AnimParamsEvent";

    uint8_t unk40[0x68 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(AnimParamsEvent, 0x68);
} // namespace ent
using entAnimParamsEvent = ent::AnimParamsEvent;
using AnimParamsEvent = ent::AnimParamsEvent;
} // namespace RED4ext

// clang-format on
