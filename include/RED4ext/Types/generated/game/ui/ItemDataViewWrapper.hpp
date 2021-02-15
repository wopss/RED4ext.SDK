#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/ui/BaseItemDataSource.hpp>

namespace RED4ext
{
namespace game::ui { 
struct ItemDataViewWrapper : game::ui::BaseItemDataSource
{
    static constexpr const char* NAME = "gameuiItemDataViewWrapper";
    static constexpr const char* ALIAS = "ItemDataView";

};
RED4EXT_ASSERT_SIZE(ItemDataViewWrapper, 0x48);
} // namespace game::ui
using ItemDataView = game::ui::ItemDataViewWrapper;
} // namespace RED4ext
