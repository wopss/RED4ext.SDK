#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatTrackInfo.hpp>

namespace RED4ext
{
namespace anim
{
struct AdditionalFloatTrackEntry : ISerializable
{
    static constexpr const char* NAME = "animAdditionalFloatTrackEntry";
    static constexpr const char* ALIAS = NAME;

    CName name; // 30
    anim::FloatTrackInfo trackInfo; // 38
    CurveData<float> values; // 48
};
RED4EXT_ASSERT_SIZE(AdditionalFloatTrackEntry, 0x80);
} // namespace anim
using animAdditionalFloatTrackEntry = anim::AdditionalFloatTrackEntry;
} // namespace RED4ext

// clang-format on
