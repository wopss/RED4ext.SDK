#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace game::ui
{
struct PhotoModeOptionSelectorData
{
    static constexpr const char* NAME = "gameuiPhotoModeOptionSelectorData";
    static constexpr const char* ALIAS = "PhotoModeOptionSelectorData";

    CString optionText; // 00
    int32_t optionData; // 20
    uint8_t unk24[0x28 - 0x24]; // 24
};
RED4EXT_ASSERT_SIZE(PhotoModeOptionSelectorData, 0x28);
} // namespace game::ui
using gameuiPhotoModeOptionSelectorData = game::ui::PhotoModeOptionSelectorData;
using PhotoModeOptionSelectorData = game::ui::PhotoModeOptionSelectorData;
} // namespace RED4ext

// clang-format on
