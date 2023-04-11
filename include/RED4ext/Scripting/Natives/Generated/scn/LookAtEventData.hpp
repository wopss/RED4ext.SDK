#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/LookAtLimits.hpp>

namespace RED4ext
{
namespace scn
{
struct LookAtEventData
{
    static constexpr const char* NAME = "scnLookAtEventData";
    static constexpr const char* ALIAS = NAME;

    uint32_t id; // 00
    bool enable; // 04
    uint8_t unk05[0x8 - 0x5]; // 5
    CName singleBodyPartName; // 08
    CName singleTargetSlot; // 10
    CName bodyTargetSlot; // 18
    CName headTargetSlot; // 20
    CName eyesTargetSlot; // 28
    float singleWeight; // 30
    float bodyWeight; // 34
    float headWeight; // 38
    float eyesWeight; // 3C
    bool useSingleWeightCurve; // 40
    bool useBodyWeightCurve; // 41
    bool useHeadWeightCurve; // 42
    bool useEyesWeightCurve; // 43
    uint8_t unk44[0x48 - 0x44]; // 44
    CurveData<float> singleWeightCurve; // 48
    CurveData<float> bodyWeightCurve; // 80
    CurveData<float> headWeightCurve; // B8
    CurveData<float> eyesWeightCurve; // F0
    anim::LookAtLimits singleLimits; // 128
    anim::LookAtLimits bodyLimits; // 138
    anim::LookAtLimits headLimits; // 148
    anim::LookAtLimits eyesLimits; // 158
};
RED4EXT_ASSERT_SIZE(LookAtEventData, 0x168);
} // namespace scn
using scnLookAtEventData = scn::LookAtEventData;
} // namespace RED4ext

// clang-format on
