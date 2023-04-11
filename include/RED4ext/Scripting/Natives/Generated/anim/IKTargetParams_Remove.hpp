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
struct IKTargetParams_Remove : ISerializable
{
    static constexpr const char* NAME = "animIKTargetParams_Remove";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x40 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(IKTargetParams_Remove, 0x40);
} // namespace anim
using animIKTargetParams_Remove = anim::IKTargetParams_Remove;
} // namespace RED4ext

// clang-format on
