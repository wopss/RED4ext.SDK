#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>

namespace RED4ext
{
namespace anim
{
struct PoleVectorDetails
{
    static constexpr const char* NAME = "animPoleVectorDetails";
    static constexpr const char* ALIAS = NAME;

    anim::TransformIndex targetBone; // 00
    Vector3 positionOffset; // 18
    uint8_t unk24[0x28 - 0x24]; // 24
};
RED4EXT_ASSERT_SIZE(PoleVectorDetails, 0x28);
} // namespace anim
using animPoleVectorDetails = anim::PoleVectorDetails;
} // namespace RED4ext

// clang-format on
