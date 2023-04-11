#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/AbstractDataSourceWrapper.hpp>

namespace RED4ext
{
namespace game::ui
{
struct BaseItemDataSource : ink::AbstractDataSourceWrapper
{
    static constexpr const char* NAME = "gameuiBaseItemDataSource";
    static constexpr const char* ALIAS = "BaseItemDataSource";

};
RED4EXT_ASSERT_SIZE(BaseItemDataSource, 0x48);
} // namespace game::ui
using gameuiBaseItemDataSource = game::ui::BaseItemDataSource;
using BaseItemDataSource = game::ui::BaseItemDataSource;
} // namespace RED4ext

// clang-format on
