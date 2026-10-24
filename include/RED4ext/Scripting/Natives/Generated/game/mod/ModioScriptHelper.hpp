#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game::mod
{
struct ModioScriptHelper
{
    static constexpr const char* NAME = "gamemodModioScriptHelper";
    static constexpr const char* ALIAS = "Modio";

    uint8_t unk00[0x1 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(ModioScriptHelper, 0x1);
} // namespace game::mod
using gamemodModioScriptHelper = game::mod::ModioScriptHelper;
using Modio = game::mod::ModioScriptHelper;
} // namespace RED4ext

// clang-format on
