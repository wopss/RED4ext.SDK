#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>

namespace RED4ext
{
namespace game::ui { 
struct MappinUtils
{
    static constexpr const char* NAME = "gameuiMappinUtils";
    static constexpr const char* ALIAS = "MappinUIUtils";

    uint8_t unk00[0x10 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(MappinUtils, 0x10);
} // namespace game::ui
using MappinUIUtils = game::ui::MappinUtils;
} // namespace RED4ext
