#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/PhotoModeItem_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct PhotoModeSticker_Record : game::data::PhotoModeItem_Record
{
    static constexpr const char* NAME = "gamedataPhotoModeSticker_Record";
    static constexpr const char* ALIAS = "PhotoModeSticker_Record";

    uint8_t unk60[0x78 - 0x60]; // 60
};
RED4EXT_ASSERT_SIZE(PhotoModeSticker_Record, 0x78);
} // namespace game::data
using gamedataPhotoModeSticker_Record = game::data::PhotoModeSticker_Record;
using PhotoModeSticker_Record = game::data::PhotoModeSticker_Record;
} // namespace RED4ext

// clang-format on
