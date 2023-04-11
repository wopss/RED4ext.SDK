#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/gsm/PopupState.hpp>

namespace RED4ext
{
namespace gsm
{
struct MenuState_GatheringSaves : gsm::PopupState
{
    static constexpr const char* NAME = "gsmMenuState_GatheringSaves";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk308[0x328 - 0x308]; // 308
};
RED4EXT_ASSERT_SIZE(MenuState_GatheringSaves, 0x328);
} // namespace gsm
using gsmMenuState_GatheringSaves = gsm::MenuState_GatheringSaves;
} // namespace RED4ext

// clang-format on
