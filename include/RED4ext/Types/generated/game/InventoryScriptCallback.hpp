#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>

namespace RED4ext
{
namespace game { 
struct InventoryScriptCallback : IScriptable
{
    static constexpr const char* NAME = "gameInventoryScriptCallback";
    static constexpr const char* ALIAS = "InventoryScriptCallback";

    ItemID itemID; // 40
};
RED4EXT_ASSERT_SIZE(InventoryScriptCallback, 0x50);
} // namespace game
using InventoryScriptCallback = game::InventoryScriptCallback;
} // namespace RED4ext
