#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/RigPartBone.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/RigPartBoneTree.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformMask.hpp>

namespace RED4ext
{
namespace anim
{
struct RigPart
{
    static constexpr const char* NAME = "animRigPart";
    static constexpr const char* ALIAS = NAME;

    CName name; // 00
    DynArray<anim::TransformMask> mask; // 08
    DynArray<anim::RigPartBone> singleBones; // 18
    DynArray<anim::RigPartBoneTree> treeBones; // 28
    DynArray<CName> bonesWithRotationInModelSpace; // 38
    DynArray<int32_t> maskRotMS; // 48
};
RED4EXT_ASSERT_SIZE(RigPart, 0x58);
} // namespace anim
using animRigPart = anim::RigPart;
} // namespace RED4ext

// clang-format on
