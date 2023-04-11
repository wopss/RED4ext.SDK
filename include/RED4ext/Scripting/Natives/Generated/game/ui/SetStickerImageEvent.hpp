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
struct SetStickerImageEvent : red::Event
{
    static constexpr const char* NAME = "gameuiSetStickerImageEvent";
    static constexpr const char* ALIAS = "SetStickerImageEvent";

    uint8_t unk40[0x58 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(SetStickerImageEvent, 0x58);
} // namespace game::ui
using gameuiSetStickerImageEvent = game::ui::SetStickerImageEvent;
using SetStickerImageEvent = game::ui::SetStickerImageEvent;
} // namespace RED4ext

// clang-format on
