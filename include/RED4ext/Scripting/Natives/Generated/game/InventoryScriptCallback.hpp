#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game
{
struct InventoryScriptCallback : IScriptable
{
    static constexpr const char* NAME = "gameInventoryScriptCallback";
    static constexpr const char* ALIAS = "InventoryScriptCallback";

    ItemID itemID; // 40
};
RED4EXT_ASSERT_SIZE(InventoryScriptCallback, 0x50);
} // namespace game
using gameInventoryScriptCallback = game::InventoryScriptCallback;
using InventoryScriptCallback = game::InventoryScriptCallback;
} // namespace RED4ext

// clang-format on
