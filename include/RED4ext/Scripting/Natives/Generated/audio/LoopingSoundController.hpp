#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace audio
{
struct LoopingSoundController
{
    static constexpr const char* NAME = "audioLoopingSoundController";
    static constexpr const char* ALIAS = NAME;

    CName playEvent; // 00
    CName preStopEvent; // 08
    CName stopEvent; // 10
};
RED4EXT_ASSERT_SIZE(LoopingSoundController, 0x18);
} // namespace audio
using audioLoopingSoundController = audio::LoopingSoundController;
} // namespace RED4ext

// clang-format on
