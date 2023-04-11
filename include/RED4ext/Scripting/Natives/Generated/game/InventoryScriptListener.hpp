#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IInventoryListener.hpp>

namespace RED4ext
{
namespace game
{
struct InventoryScriptListener : game::IInventoryListener
{
    static constexpr const char* NAME = "gameInventoryScriptListener";
    static constexpr const char* ALIAS = "InventoryScriptListener";

    uint8_t unk40[0x50 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(InventoryScriptListener, 0x50);
} // namespace game
using gameInventoryScriptListener = game::InventoryScriptListener;
using InventoryScriptListener = game::InventoryScriptListener;
} // namespace RED4ext

// clang-format on
