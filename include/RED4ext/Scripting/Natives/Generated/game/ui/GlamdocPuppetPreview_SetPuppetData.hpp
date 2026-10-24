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
struct GlamdocPuppetPreview_SetPuppetData : red::Event
{
    static constexpr const char* NAME = "gameuiGlamdocPuppetPreview_SetPuppetData";
    static constexpr const char* ALIAS = NAME;

    int32_t cyberware; // 40
    int32_t menu; // 44
    int32_t color; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
};
RED4EXT_ASSERT_SIZE(GlamdocPuppetPreview_SetPuppetData, 0x50);
} // namespace game::ui
using gameuiGlamdocPuppetPreview_SetPuppetData = game::ui::GlamdocPuppetPreview_SetPuppetData;
} // namespace RED4ext

// clang-format on
