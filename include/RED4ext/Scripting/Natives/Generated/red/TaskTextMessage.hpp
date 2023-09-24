#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/TaskTextMessageType.hpp>

namespace RED4ext
{
namespace red
{
struct TaskTextMessage
{
    static constexpr const char* NAME = "redTaskTextMessage";
    static constexpr const char* ALIAS = NAME;

    uint32_t taskId; // 00
    uint8_t unk04[0x8 - 0x4]; // 4
    uint32_t parent; // 08
    uint8_t unk0C[0x10 - 0xC]; // C
    CString text; // 10
    red::TaskTextMessageType type; // 30
    uint8_t unk34[0x38 - 0x34]; // 34
};
RED4EXT_ASSERT_SIZE(TaskTextMessage, 0x38);
} // namespace red
using redTaskTextMessage = red::TaskTextMessage;
} // namespace RED4ext

// clang-format on
