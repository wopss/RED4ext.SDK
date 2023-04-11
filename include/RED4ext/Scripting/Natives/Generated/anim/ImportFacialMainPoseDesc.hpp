#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/ImportFacialPoseDesc.hpp>

namespace RED4ext
{
namespace anim
{
struct ImportFacialMainPoseDesc
{
    static constexpr const char* NAME = "animImportFacialMainPoseDesc";
    static constexpr const char* ALIAS = NAME;

    DynArray<CName> influencedBy; // 00
    DynArray<uint16_t> influenceMainWeightIndices; // 10
    DynArray<anim::ImportFacialPoseDesc> poses; // 20
    DynArray<uint16_t> poseIndices; // 30
    DynArray<float> weights; // 40
    DynArray<float> inBetweenScopeMultipliers; // 50
    CName name; // 60
    uint16_t index; // 68
    uint8_t influenceType; // 6A
    uint8_t side; // 6B
    uint8_t facePart; // 6C
    uint8_t unk6D[0x70 - 0x6D]; // 6D
};
RED4EXT_ASSERT_SIZE(ImportFacialMainPoseDesc, 0x70);
} // namespace anim
using animImportFacialMainPoseDesc = anim::ImportFacialMainPoseDesc;
} // namespace RED4ext

// clang-format on
