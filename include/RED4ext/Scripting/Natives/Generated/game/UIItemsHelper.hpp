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
struct UIItemsHelper : IScriptable
{
    static constexpr const char* NAME = "gameUIItemsHelper";
    static constexpr const char* ALIAS = "UIItemsHelper";

};
RED4EXT_ASSERT_SIZE(UIItemsHelper, 0x40);
} // namespace game
using gameUIItemsHelper = game::UIItemsHelper;
using UIItemsHelper = game::UIItemsHelper;
} // namespace RED4ext

// clang-format on
