#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/SocketType.hpp>

namespace RED4ext
{
namespace quest
{
struct PlaceholderNodeSocketInfo
{
    static constexpr const char* NAME = "questPlaceholderNodeSocketInfo";
    static constexpr const char* ALIAS = NAME;

    CName name; // 00
    quest::SocketType type; // 08
    uint8_t unk09[0x10 - 0x9]; // 9
};
RED4EXT_ASSERT_SIZE(PlaceholderNodeSocketInfo, 0x10);
} // namespace quest
using questPlaceholderNodeSocketInfo = quest::PlaceholderNodeSocketInfo;
} // namespace RED4ext

// clang-format on
