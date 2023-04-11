#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_Base : ISerializable
{
    static constexpr const char* NAME = "animAnimNode_Base";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x40 - 0x30]; // 30
    uint32_t id; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(AnimNode_Base, 0x48);
} // namespace anim
using animAnimNode_Base = anim::AnimNode_Base;
} // namespace RED4ext

// clang-format on
