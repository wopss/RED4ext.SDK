#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data
{
struct AdvertisementFormatsEnum_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataAdvertisementFormatsEnum_Record";
    static constexpr const char* ALIAS = "AdvertisementFormatsEnum_Record";

    uint8_t unk48[0x60 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AdvertisementFormatsEnum_Record, 0x60);
} // namespace game::data
using gamedataAdvertisementFormatsEnum_Record = game::data::AdvertisementFormatsEnum_Record;
using AdvertisementFormatsEnum_Record = game::data::AdvertisementFormatsEnum_Record;
} // namespace RED4ext

// clang-format on
