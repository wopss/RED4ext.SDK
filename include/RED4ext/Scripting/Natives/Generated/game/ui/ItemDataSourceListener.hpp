#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IInventoryListener.hpp>

namespace RED4ext
{
namespace game::ui
{
struct ItemDataSourceListener : game::IInventoryListener
{
    static constexpr const char* NAME = "gameuiItemDataSourceListener";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x48 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(ItemDataSourceListener, 0x48);
} // namespace game::ui
using gameuiItemDataSourceListener = game::ui::ItemDataSourceListener;
} // namespace RED4ext

// clang-format on
