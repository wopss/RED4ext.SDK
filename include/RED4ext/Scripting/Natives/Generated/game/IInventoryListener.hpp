#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game
{
struct IInventoryListener : IScriptable
{
    static constexpr const char* NAME = "gameIInventoryListener";
    static constexpr const char* ALIAS = "InventoryListener";

};
RED4EXT_ASSERT_SIZE(IInventoryListener, 0x40);
} // namespace game
using gameIInventoryListener = game::IInventoryListener;
using InventoryListener = game::IInventoryListener;
} // namespace RED4ext

// clang-format on
