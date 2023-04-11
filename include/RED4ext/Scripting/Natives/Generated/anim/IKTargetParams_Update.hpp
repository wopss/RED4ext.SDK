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
struct IKTargetParams_Update : ISerializable
{
    static constexpr const char* NAME = "animIKTargetParams_Update";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x40 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(IKTargetParams_Update, 0x40);
} // namespace anim
using animIKTargetParams_Update = anim::IKTargetParams_Update;
} // namespace RED4ext

// clang-format on
