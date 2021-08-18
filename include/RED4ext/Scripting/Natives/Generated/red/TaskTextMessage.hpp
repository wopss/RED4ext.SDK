#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/TaskTextMessageType.hpp>

namespace RED4ext
{
namespace red { 
struct TaskTextMessage
{
    static constexpr const char* NAME = "redTaskTextMessage";
    static constexpr const char* ALIAS = NAME;

    uint32_t taskId; // 00
    uint8_t unk04[0x8 - 0x4]; // 4
    CString text; // 08
    red::TaskTextMessageType type; // 28
    uint8_t unk2C[0x30 - 0x2C]; // 2C
};
RED4EXT_ASSERT_SIZE(TaskTextMessage, 0x30);
} // namespace red
} // namespace RED4ext
