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
struct StickerEditorEnableCursorInputEvent : red::Event
{
    static constexpr const char* NAME = "gameuiStickerEditorEnableCursorInputEvent";
    static constexpr const char* ALIAS = "StickerEditorEnableCursorInputEvent";

    uint8_t unk40[0x48 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(StickerEditorEnableCursorInputEvent, 0x48);
} // namespace game::ui
using gameuiStickerEditorEnableCursorInputEvent = game::ui::StickerEditorEnableCursorInputEvent;
using StickerEditorEnableCursorInputEvent = game::ui::StickerEditorEnableCursorInputEvent;
} // namespace RED4ext

// clang-format on
