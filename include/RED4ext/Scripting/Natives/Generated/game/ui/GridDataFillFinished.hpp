#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::ui { 
struct GridDataFillFinished : red::Event
{
    static constexpr const char* NAME = "gameuiGridDataFillFinished";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(GridDataFillFinished, 0x40);
} // namespace game::ui
} // namespace RED4ext
