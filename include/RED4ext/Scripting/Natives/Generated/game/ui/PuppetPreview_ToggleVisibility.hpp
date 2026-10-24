#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::ui
{
struct PuppetPreview_ToggleVisibility : red::Event
{
    static constexpr const char* NAME = "gameuiPuppetPreview_ToggleVisibility";
    static constexpr const char* ALIAS = NAME;

    bool visible; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
};
RED4EXT_ASSERT_SIZE(PuppetPreview_ToggleVisibility, 0x48);
} // namespace game::ui
using gameuiPuppetPreview_ToggleVisibility = game::ui::PuppetPreview_ToggleVisibility;
} // namespace RED4ext

// clang-format on
