#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::ui { 
struct ItemPreview_WaitOneFrame : red::Event
{
    static constexpr const char* NAME = "gameuiItemPreview_WaitOneFrame";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(ItemPreview_WaitOneFrame, 0x40);
} // namespace game::ui
} // namespace RED4ext
