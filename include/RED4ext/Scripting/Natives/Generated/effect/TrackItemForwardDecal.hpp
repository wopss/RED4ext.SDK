#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/effect/TrackItem.hpp>

namespace RED4ext
{
struct CMesh;
struct IEvaluatorVector;

namespace effect
{
struct TrackItemForwardDecal : effect::TrackItem
{
    static constexpr const char* NAME = "effectTrackItemForwardDecal";
    static constexpr const char* ALIAS = NAME;

    Ref<CMesh> mesh; // 48
    CName appearance; // 60
    Handle<IEvaluatorVector> scale; // 68
    float additionalRotation; // 78
    float sizeThreshold; // 7C
    float fadeOutTime; // 80
    float fadeInTime; // 84
    bool randomRotation; // 88
    bool randomAppearance; // 89
    bool isAttached; // 8A
    uint8_t unk8B[0x8C - 0x8B]; // 8B
    uint32_t subUVx; // 8C
    uint32_t subUVy; // 90
    uint32_t frame; // 94
};
RED4EXT_ASSERT_SIZE(TrackItemForwardDecal, 0x98);
} // namespace effect
using effectTrackItemForwardDecal = effect::TrackItemForwardDecal;
} // namespace RED4ext

// clang-format on
