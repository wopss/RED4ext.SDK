#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/PhotoModeItem_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct PhotoModePose_Record : game::data::PhotoModeItem_Record
{
    static constexpr const char* NAME = "gamedataPhotoModePose_Record";
    static constexpr const char* ALIAS = "PhotoModePose_Record";

    uint8_t unk50[0x70 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(PhotoModePose_Record, 0x70);
} // namespace game::data
using PhotoModePose_Record = game::data::PhotoModePose_Record;
} // namespace RED4ext
