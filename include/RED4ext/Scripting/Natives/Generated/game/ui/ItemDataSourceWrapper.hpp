#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/BaseItemDataSource.hpp>

namespace RED4ext
{
namespace game::ui
{
struct ItemDataSourceWrapper : game::ui::BaseItemDataSource
{
    static constexpr const char* NAME = "gameuiItemDataSourceWrapper";
    static constexpr const char* ALIAS = "ItemDataSource";

};
RED4EXT_ASSERT_SIZE(ItemDataSourceWrapper, 0x48);
} // namespace game::ui
using gameuiItemDataSourceWrapper = game::ui::ItemDataSourceWrapper;
using ItemDataSource = game::ui::ItemDataSourceWrapper;
} // namespace RED4ext

// clang-format on
