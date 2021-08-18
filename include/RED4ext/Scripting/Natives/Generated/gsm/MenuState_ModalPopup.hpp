#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/gsm/PopupState.hpp>

namespace RED4ext
{
namespace gsm { 
struct MenuState_ModalPopup : gsm::PopupState
{
    static constexpr const char* NAME = "gsmMenuState_ModalPopup";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk308[0x350 - 0x308]; // 308
};
RED4EXT_ASSERT_SIZE(MenuState_ModalPopup, 0x350);
} // namespace gsm
} // namespace RED4ext
