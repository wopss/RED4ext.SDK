#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/gsm/State.hpp>

namespace RED4ext
{
namespace gsm
{
struct PopupState : gsm::State
{
    static constexpr const char* NAME = "gsmPopupState";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkB8[0x308 - 0xB8]; // B8
};
RED4EXT_ASSERT_SIZE(PopupState, 0x308);
} // namespace gsm
using gsmPopupState = gsm::PopupState;
} // namespace RED4ext

// clang-format on
