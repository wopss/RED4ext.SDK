#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/QsTransform.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/StackTransformsExtender_SnapToBoneMethod.hpp>

namespace RED4ext
{
namespace anim { 
struct StackTransformsExtender_JsonEntry
{
    static constexpr const char* NAME = "animStackTransformsExtender_JsonEntry";
    static constexpr const char* ALIAS = NAME;

    CName name; // 00
    CName parentName; // 08
    QsTransform referenceTransformLs; // 10
    anim::StackTransformsExtender_SnapToBoneMethod snapMethod; // 40
    bool snapToReference; // 44
    uint8_t unk45[0x48 - 0x45]; // 45
    CName snapTargetBone; // 48
    bool offsetToReference; // 50
    uint8_t unk51[0x58 - 0x51]; // 51
    CName offsetSpaceBone; // 58
    QsTransform offset; // 60
};
RED4EXT_ASSERT_SIZE(StackTransformsExtender_JsonEntry, 0x90);
} // namespace anim
} // namespace RED4ext
