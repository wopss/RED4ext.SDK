#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/LookAtRequest.hpp>

namespace RED4ext
{
namespace anim
{
struct LookAtRequestForPart
{
    static constexpr const char* NAME = "animLookAtRequestForPart";
    static constexpr const char* ALIAS = NAME;

    CName bodyPart; // 00
    anim::LookAtRequest request; // 08
    int32_t attachLeftHandToRightHand; // 78
    int32_t attachRightHandToLeftHand; // 7C
};
RED4EXT_ASSERT_SIZE(LookAtRequestForPart, 0x80);
} // namespace anim
using animLookAtRequestForPart = anim::LookAtRequestForPart;
} // namespace RED4ext

// clang-format on
