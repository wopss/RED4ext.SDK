#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimEvent.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimEventGenderAlt.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudParameter.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudSwitch.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimEvent_Sound : anim::AnimEvent
{
    static constexpr const char* NAME = "animAnimEvent_Sound";
    static constexpr const char* ALIAS = NAME;

    DynArray<audio::AudSwitch> switches; // 40
    DynArray<audio::AudParameter> params; // 50
    DynArray<CName> dynamicParams; // 60
    CName metadataContext; // 70
    CName onlyPlayOn; // 78
    CName dontPlayOn; // 80
    anim::AnimEventGenderAlt playerGenderAlt; // 88
    uint8_t unk8C[0x90 - 0x8C]; // 8C
};
RED4EXT_ASSERT_SIZE(AnimEvent_Sound, 0x90);
} // namespace anim
using animAnimEvent_Sound = anim::AnimEvent_Sound;
} // namespace RED4ext

// clang-format on
