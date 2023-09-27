#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/GrenadeDeliveryMethod_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct KnifeThrowDelivery_Record : game::data::GrenadeDeliveryMethod_Record
{
    static constexpr const char* NAME = "gamedataKnifeThrowDelivery_Record";
    static constexpr const char* ALIAS = "KnifeThrowDelivery_Record";

};
RED4EXT_ASSERT_SIZE(KnifeThrowDelivery_Record, 0xA0);
} // namespace game::data
using gamedataKnifeThrowDelivery_Record = game::data::KnifeThrowDelivery_Record;
using KnifeThrowDelivery_Record = game::data::KnifeThrowDelivery_Record;
} // namespace RED4ext

// clang-format on
