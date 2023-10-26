#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/ActorId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/LookAtTargetType.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/PerformerId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/PropId.hpp>

namespace RED4ext
{
namespace scn
{
struct __declspec(align(0x10)) AnimTargetBasicData
{
    static constexpr const char* NAME = "scnAnimTargetBasicData";
    static constexpr const char* ALIAS = NAME;

    scn::PerformerId performerId; // 00
    bool isStart; // 04
    uint8_t unk05[0x8 - 0x5]; // 5
    scn::PerformerId targetPerformerId; // 08
    uint8_t unk0C[0x10 - 0xC]; // C
    CName targetSlot; // 10
    uint8_t unk18[0x20 - 0x18]; // 18
    Vector4 targetOffsetEntitySpace; // 20
    Vector4 staticTarget; // 30
    scn::ActorId targetActorId; // 40
    scn::PropId targetPropId; // 44
    scn::LookAtTargetType targetType; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
};
RED4EXT_ASSERT_SIZE(AnimTargetBasicData, 0x50);
} // namespace scn
using scnAnimTargetBasicData = scn::AnimTargetBasicData;
} // namespace RED4ext

// clang-format on
