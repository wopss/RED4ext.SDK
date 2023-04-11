#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace game { struct UILocalizationDataPackage; }

namespace game
{
struct InventoryItemAbility
{
    static constexpr const char* NAME = "gameInventoryItemAbility";
    static constexpr const char* ALIAS = "InventoryItemAbility";

    CName IconPath; // 00
    CString Title; // 08
    CString Description; // 28
    Handle<game::UILocalizationDataPackage> LocalizationDataPackage; // 48
};
RED4EXT_ASSERT_SIZE(InventoryItemAbility, 0x58);
} // namespace game
using gameInventoryItemAbility = game::InventoryItemAbility;
using InventoryItemAbility = game::InventoryItemAbility;
} // namespace RED4ext

// clang-format on
