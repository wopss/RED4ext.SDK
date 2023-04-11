#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/ImportFacialTransform.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/ImportFacialTransformNoScale.hpp>

namespace RED4ext
{
namespace anim
{
struct ImportFacialCorrectivePoseDataDesc
{
    static constexpr const char* NAME = "animImportFacialCorrectivePoseDataDesc";
    static constexpr const char* ALIAS = NAME;

    DynArray<anim::ImportFacialTransform> transforms; // 00
    DynArray<anim::ImportFacialTransformNoScale> transformsNoScale; // 10
    DynArray<uint16_t> transformIds; // 20
    DynArray<CName> transformNames; // 30
    DynArray<float> parentsWeights; // 40
};
RED4EXT_ASSERT_SIZE(ImportFacialCorrectivePoseDataDesc, 0x50);
} // namespace anim
using animImportFacialCorrectivePoseDataDesc = anim::ImportFacialCorrectivePoseDataDesc;
} // namespace RED4ext

// clang-format on
