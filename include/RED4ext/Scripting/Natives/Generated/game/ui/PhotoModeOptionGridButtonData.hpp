#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/ResourceReferenceScriptToken.hpp>

namespace RED4ext
{
namespace game::ui
{
struct PhotoModeOptionGridButtonData
{
    static constexpr const char* NAME = "gameuiPhotoModeOptionGridButtonData";
    static constexpr const char* ALIAS = "PhotoModeOptionGridButtonData";

    CName imagePart; // 00
    red::ResourceReferenceScriptToken atlasResource; // 08
    int32_t optionData; // 10
    uint8_t unk14[0x18 - 0x14]; // 14
};
RED4EXT_ASSERT_SIZE(PhotoModeOptionGridButtonData, 0x18);
} // namespace game::ui
using gameuiPhotoModeOptionGridButtonData = game::ui::PhotoModeOptionGridButtonData;
using PhotoModeOptionGridButtonData = game::ui::PhotoModeOptionGridButtonData;
} // namespace RED4ext

// clang-format on
