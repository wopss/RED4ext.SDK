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
struct PhotoModeEffect_Record : game::data::PhotoModeItem_Record
{
    static constexpr const char* NAME = "gamedataPhotoModeEffect_Record";
    static constexpr const char* ALIAS = "PhotoModeEffect_Record";

    uint8_t unk60[0x78 - 0x60]; // 60
};
RED4EXT_ASSERT_SIZE(PhotoModeEffect_Record, 0x78);
} // namespace game::data
using gamedataPhotoModeEffect_Record = game::data::PhotoModeEffect_Record;
using PhotoModeEffect_Record = game::data::PhotoModeEffect_Record;
} // namespace RED4ext

// clang-format on
