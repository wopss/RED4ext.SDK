#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game::ui
{
struct MappinUIUtils
{
    static constexpr const char* NAME = "gameuiMappinUIUtils";
    static constexpr const char* ALIAS = "MappinUIUtils";

    uint8_t unk00[0x1 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(MappinUIUtils, 0x1);
} // namespace game::ui
using gameuiMappinUIUtils = game::ui::MappinUIUtils;
using MappinUIUtils = game::ui::MappinUIUtils;
} // namespace RED4ext

// clang-format on
