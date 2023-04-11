#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FacialSetup_BufferInfo.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FacialSetup_PosesBufferInfo.hpp>

namespace RED4ext
{
namespace anim { struct Rig; }

namespace anim
{
struct FacialSetup : CResource
{
    static constexpr const char* NAME = "animFacialSetup";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x2D8 - 0x40]; // 40
    anim::FacialSetup_BufferInfo info; // 2D8
    anim::FacialSetup_PosesBufferInfo posesInfo; // 344
    DataBuffer bakedData; // 380
    uint8_t unk3A8[0x718 - 0x3A8]; // 3A8
    DataBuffer mainPosesData; // 718
    DataBuffer correctivePosesData; // 740
    uint8_t unk768[0x888 - 0x768]; // 768
    DynArray<uint16_t> usedTransformIndices; // 888
    uint32_t version; // 898
    uint8_t unk89C[0x8A0 - 0x89C]; // 89C
    Ref<anim::Rig> rig; // 8A0
    Ref<anim::Rig> inputRig; // 8B8
    bool useFemaleAnimSet; // 8D0
    uint8_t unk8D1[0x8D8 - 0x8D1]; // 8D1
};
RED4EXT_ASSERT_SIZE(FacialSetup, 0x8D8);
} // namespace anim
using animFacialSetup = anim::FacialSetup;
} // namespace RED4ext

// clang-format on
