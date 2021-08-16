#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/Quaternion.hpp>
#include <RED4ext/Types/generated/Vector3.hpp>
#include <RED4ext/Types/generated/scn/OffsetMode.hpp>
#include <RED4ext/Types/generated/scn/PerformerId.hpp>
#include <RED4ext/Types/generated/scn/PropId.hpp>
#include <RED4ext/Types/generated/scn/SceneEvent.hpp>
#include <RED4ext/Types/generated/scn/events/AttachPropToWorldCachedFallbackBone.hpp>

namespace RED4ext
{
namespace anim { struct AnimSet; }

namespace scn::events { 
struct AttachPropToWorld : scn::SceneEvent
{
    static constexpr const char* NAME = "scneventsAttachPropToWorld";
    static constexpr const char* ALIAS = NAME;

    scn::PropId propId; // 58
    scn::OffsetMode offsetMode; // 5C
    uint8_t unk5D[0x60 - 0x5D]; // 5D
    Vector3 customOffsetPos; // 60
    uint8_t unk6C[0x70 - 0x6C]; // 6C
    Quaternion customOffsetRot; // 70
    scn::PerformerId referencePerformer; // 80
    TweakDBID referencePerformerSlotId; // 84
    TweakDBID referencePerformerItemId; // 8C
    uint8_t unk94[0xA0 - 0x94]; // 94
    alignas(16) StaticArray<scn::events::AttachPropToWorldCachedFallbackBone, 2> fallbackCachedBones; // A0
    Ref<anim::AnimSet> fallbackAnimset; // 110
    CName fallbackAnimationName; // 128
    float fallbackAnimTime; // 130
    uint8_t unk134[0x140 - 0x134]; // 134
};
RED4EXT_ASSERT_SIZE(AttachPropToWorld, 0x140);
} // namespace scn::events
} // namespace RED4ext
