#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/ImportFacialCorrectivePoseDataDesc.hpp>

namespace RED4ext
{
namespace anim
{
struct ImportFacialCorrectivePoseDesc
{
    static constexpr const char* NAME = "animImportFacialCorrectivePoseDesc";
    static constexpr const char* ALIAS = NAME;

    DynArray<CName> influencedBy; // 00
    DynArray<uint16_t> influenceMainWeightIndices; // 10
    DynArray<anim::ImportFacialCorrectivePoseDataDesc> poses; // 20
    DynArray<float> weights; // 30
    DynArray<float> inBetweenScopeMultipliers; // 40
    DynArray<int16_t> parentsInBetweenIndices; // 50
    DynArray<uint16_t> parentIndices; // 60
    CName name; // 70
    uint16_t index; // 78
    uint8_t influencedBySpeed; // 7A
    uint8_t poseLOD; // 7B
    uint8_t poseType; // 7C
    bool linearCorrection; // 7D
    bool useGlobalWeight; // 7E
    uint8_t unk7F[0x80 - 0x7F]; // 7F
};
RED4EXT_ASSERT_SIZE(ImportFacialCorrectivePoseDesc, 0x80);
} // namespace anim
using animImportFacialCorrectivePoseDesc = anim::ImportFacialCorrectivePoseDesc;
} // namespace RED4ext

// clang-format on
