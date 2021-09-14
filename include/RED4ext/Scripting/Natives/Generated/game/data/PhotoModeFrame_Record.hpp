#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/PhotoModeItem_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct PhotoModeFrame_Record : game::data::PhotoModeItem_Record
{
    static constexpr const char* NAME = "gamedataPhotoModeFrame_Record";
    static constexpr const char* ALIAS = "PhotoModeFrame_Record";

    uint8_t unk50[0x68 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(PhotoModeFrame_Record, 0x68);
} // namespace game::data
using PhotoModeFrame_Record = game::data::PhotoModeFrame_Record;
} // namespace RED4ext
