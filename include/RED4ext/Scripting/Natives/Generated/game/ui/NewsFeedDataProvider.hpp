#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game::ui
{
struct NewsFeedDataProvider : IScriptable
{
    static constexpr const char* NAME = "gameuiNewsFeedDataProvider";
    static constexpr const char* ALIAS = NAME;

    TweakDBID newsTitleTweak; // 40
    TweakDBID randomNewsFeedPack; // 48
};
RED4EXT_ASSERT_SIZE(NewsFeedDataProvider, 0x50);
} // namespace game::ui
using gameuiNewsFeedDataProvider = game::ui::NewsFeedDataProvider;
} // namespace RED4ext

// clang-format on
