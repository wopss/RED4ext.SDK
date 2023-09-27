#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace red
{
struct TaskNameMessage
{
    static constexpr const char* NAME = "redTaskNameMessage";
    static constexpr const char* ALIAS = NAME;

    uint32_t id; // 00
    uint32_t parent; // 04
    CString title; // 08
    CName uniqueName; // 28
};
RED4EXT_ASSERT_SIZE(TaskNameMessage, 0x30);
} // namespace red
using redTaskNameMessage = red::TaskNameMessage;
} // namespace RED4ext

// clang-format on
