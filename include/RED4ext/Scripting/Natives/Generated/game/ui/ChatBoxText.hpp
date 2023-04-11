#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Color.hpp>

namespace RED4ext
{
namespace game::ui
{
struct ChatBoxText
{
    static constexpr const char* NAME = "gameuiChatBoxText";
    static constexpr const char* ALIAS = "ChatBoxText";

    CString text; // 00
    int32_t id; // 20
    Color color; // 24
};
RED4EXT_ASSERT_SIZE(ChatBoxText, 0x28);
} // namespace game::ui
using gameuiChatBoxText = game::ui::ChatBoxText;
using ChatBoxText = game::ui::ChatBoxText;
} // namespace RED4ext

// clang-format on
