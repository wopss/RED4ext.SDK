#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/RigPartBoneTree.hpp>

namespace RED4ext
{
namespace anim
{
struct RigPartBoneTree
{
    static constexpr const char* NAME = "animRigPartBoneTree";
    static constexpr const char* ALIAS = NAME;

    CName rootBone; // 00
    float weight; // 08
    uint8_t unk0C[0x10 - 0xC]; // C
    DynArray<anim::RigPartBoneTree> subtreesToChange; // 10
};
RED4EXT_ASSERT_SIZE(RigPartBoneTree, 0x20);
} // namespace anim
using animRigPartBoneTree = anim::RigPartBoneTree;
} // namespace RED4ext

// clang-format on
