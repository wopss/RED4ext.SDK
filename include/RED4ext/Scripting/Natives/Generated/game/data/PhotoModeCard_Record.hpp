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
struct PhotoModeCard_Record : game::data::PhotoModeItem_Record
{
    static constexpr const char* NAME = "gamedataPhotoModeCard_Record";
    static constexpr const char* ALIAS = "PhotoModeCard_Record";

    uint8_t unk60[0x88 - 0x60]; // 60
};
RED4EXT_ASSERT_SIZE(PhotoModeCard_Record, 0x88);
} // namespace game::data
using gamedataPhotoModeCard_Record = game::data::PhotoModeCard_Record;
using PhotoModeCard_Record = game::data::PhotoModeCard_Record;
} // namespace RED4ext

// clang-format on
