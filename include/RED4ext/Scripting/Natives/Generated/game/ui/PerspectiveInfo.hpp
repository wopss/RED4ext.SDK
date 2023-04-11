#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace game::ui
{
struct PerspectiveInfo
{
    static constexpr const char* NAME = "gameuiPerspectiveInfo";
    static constexpr const char* ALIAS = NAME;

    CName name; // 00
    CName fpp; // 08
    CName tpp; // 10
};
RED4EXT_ASSERT_SIZE(PerspectiveInfo, 0x18);
} // namespace game::ui
using gameuiPerspectiveInfo = game::ui::PerspectiveInfo;
} // namespace RED4ext

// clang-format on
