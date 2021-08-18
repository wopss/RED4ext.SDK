#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace world::ui { 
struct DebugPage_GameUI
{
    static constexpr const char* NAME = "worlduiDebugPage_GameUI";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x18 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(DebugPage_GameUI, 0x18);
} // namespace world::ui
} // namespace RED4ext
