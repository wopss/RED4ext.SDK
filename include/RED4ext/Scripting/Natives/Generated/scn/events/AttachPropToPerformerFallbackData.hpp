#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/PerformerId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/events/AttachPropToPerformerCachedFallbackBone.hpp>

namespace RED4ext
{
namespace anim { struct AnimSet; }

namespace scn::events
{
struct __declspec(align(0x10)) AttachPropToPerformerFallbackData
{
    static constexpr const char* NAME = "scneventsAttachPropToPerformerFallbackData";
    static constexpr const char* ALIAS = NAME;

    scn::PerformerId owner; // 00
    uint8_t unk04[0x10 - 0x4]; // 4
#pragma warning(suppress : 4324)
    alignas(16) StaticArray<scn::events::AttachPropToPerformerCachedFallbackBone, 3> fallbackCachedBones; // 10
    Ref<anim::AnimSet> fallbackAnimset; // B0
    CName fallbackAnimationName; // C8
    float fallbackAnimTime; // D0
    uint8_t unkD4[0xE0 - 0xD4]; // D4
};
RED4EXT_ASSERT_SIZE(AttachPropToPerformerFallbackData, 0xE0);
} // namespace scn::events
using scneventsAttachPropToPerformerFallbackData = scn::events::AttachPropToPerformerFallbackData;
} // namespace RED4ext

// clang-format on
