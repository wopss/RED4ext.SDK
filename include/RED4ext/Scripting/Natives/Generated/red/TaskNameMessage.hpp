#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace red { 
struct TaskNameMessage
{
    static constexpr const char* NAME = "redTaskNameMessage";
    static constexpr const char* ALIAS = NAME;

    uint32_t id; // 00
    uint8_t unk04[0x8 - 0x4]; // 4
    CString title; // 08
    CName uniqueName; // 28
};
RED4EXT_ASSERT_SIZE(TaskNameMessage, 0x30);
} // namespace red
} // namespace RED4ext
