#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudParameter.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudSwitch.hpp>
#include <RED4ext/Scripting/Natives/Generated/effect/TrackItem.hpp>

namespace RED4ext
{
struct IEvaluatorFloat;

namespace effect
{
struct TrackItemSound : effect::TrackItem
{
    static constexpr const char* NAME = "effectTrackItemSound";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x50 - 0x48]; // 48
    CName eventName; // 50
    CName rtpcName; // 58
    DynArray<audio::AudSwitch> switches; // 60
    DynArray<audio::AudParameter> params; // 70
    Handle<IEvaluatorFloat> rtpcValue; // 80
    CName positionName; // 90
    CName emitterMetadataName; // 98
};
RED4EXT_ASSERT_SIZE(TrackItemSound, 0xA0);
} // namespace effect
using effectTrackItemSound = effect::TrackItemSound;
} // namespace RED4ext

// clang-format on
