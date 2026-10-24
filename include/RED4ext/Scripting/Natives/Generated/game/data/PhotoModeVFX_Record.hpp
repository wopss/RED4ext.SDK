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
struct PhotoModeVFX_Record : game::data::PhotoModeItem_Record
{
    static constexpr const char* NAME = "gamedataPhotoModeVFX_Record";
    static constexpr const char* ALIAS = "PhotoModeVFX_Record";

    uint8_t unk60[0x70 - 0x60]; // 60
};
RED4EXT_ASSERT_SIZE(PhotoModeVFX_Record, 0x70);
} // namespace game::data
using gamedataPhotoModeVFX_Record = game::data::PhotoModeVFX_Record;
using PhotoModeVFX_Record = game::data::PhotoModeVFX_Record;
} // namespace RED4ext

// clang-format on
