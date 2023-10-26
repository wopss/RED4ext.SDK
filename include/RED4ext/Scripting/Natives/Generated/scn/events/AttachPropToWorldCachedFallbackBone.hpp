#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/Transform.hpp>

namespace RED4ext
{
namespace scn::events
{
struct __declspec(align(0x10)) AttachPropToWorldCachedFallbackBone
{
    static constexpr const char* NAME = "scneventsAttachPropToWorldCachedFallbackBone";
    static constexpr const char* ALIAS = NAME;

    CName boneName; // 00
    uint8_t unk08[0x10 - 0x8]; // 8
    Transform modelSpaceTransform; // 10
};
RED4EXT_ASSERT_SIZE(AttachPropToWorldCachedFallbackBone, 0x30);
} // namespace scn::events
using scneventsAttachPropToWorldCachedFallbackBone = scn::events::AttachPropToWorldCachedFallbackBone;
} // namespace RED4ext

// clang-format on
