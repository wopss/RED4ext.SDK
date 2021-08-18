#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::ui { 
struct PuppetPreview_ReadyToBeDisplayed : red::Event
{
    static constexpr const char* NAME = "gameuiPuppetPreview_ReadyToBeDisplayed";
    static constexpr const char* ALIAS = NAME;

    bool isMale; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
};
RED4EXT_ASSERT_SIZE(PuppetPreview_ReadyToBeDisplayed, 0x48);
} // namespace game::ui
} // namespace RED4ext
