#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/ChoiceNodeNsAdaptiveLookAtReferencePoint.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/ChoiceNodeNsLookAtParams.hpp>

namespace RED4ext
{
namespace scn
{
struct ChoiceNodeNsAdaptiveLookAtParams : scn::ChoiceNodeNsLookAtParams
{
    static constexpr const char* NAME = "scnChoiceNodeNsAdaptiveLookAtParams";
    static constexpr const char* ALIAS = NAME;

    CName nearbySlotName; // 30
    CName distantSlotName; // 38
    float blendLimit; // 40
    float referencePointFullEffectAngle; // 44
    float referencePointNoEffectAngle; // 48
    float referencePointFullEffectDistance; // 4C
    float referencePointNoEffectDistance; // 50
    uint8_t unk54[0x58 - 0x54]; // 54
    DynArray<scn::ChoiceNodeNsAdaptiveLookAtReferencePoint> referencePoints; // 58
    Vector3 auxiliaryRelativePoint; // 68
    uint8_t unk74[0x78 - 0x74]; // 74
};
RED4EXT_ASSERT_SIZE(ChoiceNodeNsAdaptiveLookAtParams, 0x78);
} // namespace scn
using scnChoiceNodeNsAdaptiveLookAtParams = scn::ChoiceNodeNsAdaptiveLookAtParams;
} // namespace RED4ext

// clang-format on
