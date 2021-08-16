#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/PhotoModeItem_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct PhotoModeBackground_Record : game::data::PhotoModeItem_Record
{
    static constexpr const char* NAME = "gamedataPhotoModeBackground_Record";
    static constexpr const char* ALIAS = "PhotoModeBackground_Record";

    uint8_t unk50[0x58 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(PhotoModeBackground_Record, 0x58);
} // namespace game::data
using PhotoModeBackground_Record = game::data::PhotoModeBackground_Record;
} // namespace RED4ext
