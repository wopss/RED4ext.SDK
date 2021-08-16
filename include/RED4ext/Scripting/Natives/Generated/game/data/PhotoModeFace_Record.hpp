#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/PhotoModeItem_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct PhotoModeFace_Record : game::data::PhotoModeItem_Record
{
    static constexpr const char* NAME = "gamedataPhotoModeFace_Record";
    static constexpr const char* ALIAS = "PhotoModeFace_Record";

    uint8_t unk50[0x58 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(PhotoModeFace_Record, 0x58);
} // namespace game::data
using PhotoModeFace_Record = game::data::PhotoModeFace_Record;
} // namespace RED4ext
