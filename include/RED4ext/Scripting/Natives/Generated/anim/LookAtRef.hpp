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
struct LookAtRef
{
    static constexpr const char* NAME = "animLookAtRef";
    static constexpr const char* ALIAS = "LookAtRef";

    int32_t id; // 00
    uint8_t unk04[0x8 - 0x4]; // 4
    CName part; // 08
};
RED4EXT_ASSERT_SIZE(LookAtRef, 0x10);
} // namespace anim
using animLookAtRef = anim::LookAtRef;
using LookAtRef = anim::LookAtRef;
} // namespace RED4ext

// clang-format on
