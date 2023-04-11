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
struct ItemDataViewWrapper : game::ui::BaseItemDataSource
{
    static constexpr const char* NAME = "gameuiItemDataViewWrapper";
    static constexpr const char* ALIAS = "ItemDataView";

};
RED4EXT_ASSERT_SIZE(ItemDataViewWrapper, 0x48);
} // namespace game::ui
using gameuiItemDataViewWrapper = game::ui::ItemDataViewWrapper;
using ItemDataView = game::ui::ItemDataViewWrapper;
} // namespace RED4ext

// clang-format on
