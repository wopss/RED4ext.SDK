#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_BlendSpace_InternalsBlendSpaceCoordinateDescription.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_BlendSpace_InternalsBlendSpacePoint.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_BlendSpace_InternalsBlendSpace
{
    static constexpr const char* NAME = "animAnimNode_BlendSpace_InternalsBlendSpace";
    static constexpr const char* ALIAS = NAME;

    uint32_t spaceDimension; // 00
    uint8_t unk04[0x8 - 0x4]; // 4
    DynArray<anim::AnimNode_BlendSpace_InternalsBlendSpaceCoordinateDescription> coordinatesDescriptions; // 08
    DynArray<anim::AnimNode_BlendSpace_InternalsBlendSpacePoint> spacePoints; // 18
    uint32_t boundaryPointsCount; // 28
    bool fireAnimEndEvent; // 2C
    uint8_t unk2D[0x30 - 0x2D]; // 2D
    CName animEndEventName; // 30
    bool isLooped; // 38
    bool needsRuntimeTriangulation; // 39
    bool wasRuntimeTriangulationResaveDone; // 3A
    uint8_t unk3B[0xB8 - 0x3B]; // 3B
    DynArray<float> cachedSpacePoints_coordinates; // B8
    uint8_t unkC8[0xE0 - 0xC8]; // C8
    DynArray<uint32_t> cachedSpaceSimplexes_pointsIndices; // E0
    uint8_t unkF0[0x108 - 0xF0]; // F0
    DynArray<int32_t> cachedSamplesForGridPoints_simplexIndex; // 108
    uint8_t unk118[0x130 - 0x118]; // 118
    DynArray<float> cachedSamplesForGridPoints_weightsForPoints; // 130
    uint8_t unk140[0x1C8 - 0x140]; // 140
};
RED4EXT_ASSERT_SIZE(AnimNode_BlendSpace_InternalsBlendSpace, 0x1C8);
} // namespace anim
using animAnimNode_BlendSpace_InternalsBlendSpace = anim::AnimNode_BlendSpace_InternalsBlendSpace;
} // namespace RED4ext

// clang-format on
