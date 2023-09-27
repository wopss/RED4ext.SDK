#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/MappinVariant.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/mappins/IPointOfInterestVariant.hpp>

namespace RED4ext
{
namespace game::mappins
{
struct CommonVariant : game::mappins::IPointOfInterestVariant
{
    static constexpr const char* NAME = "gamemappinsCommonVariant";
    static constexpr const char* ALIAS = NAME;

    game::data::MappinVariant variant; // 30
    uint8_t unk34[0x38 - 0x34]; // 34
};
RED4EXT_ASSERT_SIZE(CommonVariant, 0x38);
} // namespace game::mappins
using gamemappinsCommonVariant = game::mappins::CommonVariant;
} // namespace RED4ext

// clang-format on
