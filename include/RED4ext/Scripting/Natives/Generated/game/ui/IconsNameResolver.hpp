#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game::ui
{
struct IconsNameResolver : IScriptable
{
    static constexpr const char* NAME = "gameuiIconsNameResolver";
    static constexpr const char* ALIAS = "IconsNameResolver";

    uint8_t unk40[0x70 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(IconsNameResolver, 0x70);
} // namespace game::ui
using gameuiIconsNameResolver = game::ui::IconsNameResolver;
using IconsNameResolver = game::ui::IconsNameResolver;
} // namespace RED4ext

// clang-format on
