#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>

namespace RED4ext
{
namespace audio
{
struct UiSound
{
    static constexpr const char* NAME = "audioUiSound";
    static constexpr const char* ALIAS = NAME;

    DynArray<CName> events; // 00
};
RED4EXT_ASSERT_SIZE(UiSound, 0x10);
} // namespace audio
using audioUiSound = audio::UiSound;
} // namespace RED4ext

// clang-format on
