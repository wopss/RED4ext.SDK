#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/CResource.hpp>
#include <RED4ext/Types/generated/anim/FacialSetup_BufferInfo.hpp>
#include <RED4ext/Types/generated/anim/FacialSetup_PosesBufferInfo.hpp>

namespace RED4ext
{
namespace anim { struct Rig; }

namespace anim { 
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
    DynArray<CName> faceCorrectiveNames; // 888
    DynArray<CName> tongueCorrectiveNames; // 898
    DynArray<CName> eyesCorrectiveNames; // 8A8
    DynArray<uint16_t> usedTransformIndices; // 8B8
    uint32_t version; // 8C8
    uint8_t unk8CC[0x8D0 - 0x8CC]; // 8CC
    Ref<anim::Rig> rig; // 8D0
    Ref<anim::Rig> inputRig; // 8E8
    bool useFemaleAnimSet; // 900
    uint8_t unk901[0x908 - 0x901]; // 901
};
RED4EXT_ASSERT_SIZE(FacialSetup, 0x908);
} // namespace anim
} // namespace RED4ext
