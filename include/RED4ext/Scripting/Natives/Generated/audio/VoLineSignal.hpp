#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace audio
{
struct VoLineSignal
{
    static constexpr const char* NAME = "audioVoLineSignal";
    static constexpr const char* ALIAS = NAME;

    CRUID ruid; // 00
    CName signal; // 08
};
RED4EXT_ASSERT_SIZE(VoLineSignal, 0x10);
} // namespace audio
using audioVoLineSignal = audio::VoLineSignal;
} // namespace RED4ext

// clang-format on
