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
struct PhotoModePose_Record : game::data::PhotoModeItem_Record
{
    static constexpr const char* NAME = "gamedataPhotoModePose_Record";
    static constexpr const char* ALIAS = "PhotoModePose_Record";

    uint8_t unk60[0xF0 - 0x60]; // 60
};
RED4EXT_ASSERT_SIZE(PhotoModePose_Record, 0xF0);
} // namespace game::data
using gamedataPhotoModePose_Record = game::data::PhotoModePose_Record;
using PhotoModePose_Record = game::data::PhotoModePose_Record;
} // namespace RED4ext

// clang-format on
