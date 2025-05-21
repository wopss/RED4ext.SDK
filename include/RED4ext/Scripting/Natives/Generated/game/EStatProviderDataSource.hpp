#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game {
enum class EStatProviderDataSource : int32_t
{
    gameItemData = 0,
    InventoryItemData = 1,
    InnerItemData = 2,
    Invalid = 3,
};
} // namespace game
using gameEStatProviderDataSource = game::EStatProviderDataSource;
using EStatProviderDataSource = game::EStatProviderDataSource;
} // namespace RED4ext

// clang-format on
