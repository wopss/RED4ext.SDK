#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace anim
{
struct IKTargetRef
{
    static constexpr const char* NAME = "animIKTargetRef";
    static constexpr const char* ALIAS = "IKTargetRef";

    int32_t id; // 00
    uint8_t unk04[0x8 - 0x4]; // 4
    CName part; // 08
};
RED4EXT_ASSERT_SIZE(IKTargetRef, 0x10);
} // namespace anim
using animIKTargetRef = anim::IKTargetRef;
using IKTargetRef = anim::IKTargetRef;
} // namespace RED4ext

// clang-format on
