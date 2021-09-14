#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/PhotoModeItem_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct PhotoModeEffect_Record : game::data::PhotoModeItem_Record
{
    static constexpr const char* NAME = "gamedataPhotoModeEffect_Record";
    static constexpr const char* ALIAS = "PhotoModeEffect_Record";

    uint8_t unk50[0x58 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(PhotoModeEffect_Record, 0x58);
} // namespace game::data
using PhotoModeEffect_Record = game::data::PhotoModeEffect_Record;
} // namespace RED4ext
