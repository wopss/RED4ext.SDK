#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/anim/Interpolator.hpp>

namespace RED4ext
{
namespace ink::anim
{
struct VideoInterpolator : ink::anim::Interpolator
{
    static constexpr const char* NAME = "inkanimVideoInterpolator";
    static constexpr const char* ALIAS = "inkAnimVideo";

    float startValue; // 68
    float endValue; // 6C
    CName audioEvent; // 70
    bool retriggerAudioOnLoop; // 78
    bool synchronizeToAudio; // 79
    bool allowSkipBackward; // 7A
    uint8_t unk7B[0x80 - 0x7B]; // 7B
};
RED4EXT_ASSERT_SIZE(VideoInterpolator, 0x80);
} // namespace ink::anim
using inkanimVideoInterpolator = ink::anim::VideoInterpolator;
using inkAnimVideo = ink::anim::VideoInterpolator;
} // namespace RED4ext

// clang-format on
