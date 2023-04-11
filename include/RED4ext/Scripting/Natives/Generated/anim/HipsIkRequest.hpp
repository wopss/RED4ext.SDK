#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>

namespace RED4ext
{
namespace anim
{
struct HipsIkRequest
{
    static constexpr const char* NAME = "animHipsIkRequest";
    static constexpr const char* ALIAS = NAME;

    CName leftLegIkChain; // 00
    CName rightLegIkChain; // 08
    anim::TransformIndex hipsTransformIndex; // 10
    anim::TransformIndex leftFootTransformIndex; // 28
    anim::TransformIndex rightFootTransformIndex; // 40
    uint8_t unk58[0x78 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(HipsIkRequest, 0x78);
} // namespace anim
using animHipsIkRequest = anim::HipsIkRequest;
} // namespace RED4ext

// clang-format on
