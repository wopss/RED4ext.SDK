#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/graph/GraphSocketDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/SocketType.hpp>

namespace RED4ext
{
namespace quest
{
struct SocketDefinition : graph::GraphSocketDefinition
{
    static constexpr const char* NAME = "questSocketDefinition";
    static constexpr const char* ALIAS = NAME;

    quest::SocketType type; // 58
    uint8_t unk59[0x60 - 0x59]; // 59
};
RED4EXT_ASSERT_SIZE(SocketDefinition, 0x60);
} // namespace quest
using questSocketDefinition = quest::SocketDefinition;
} // namespace RED4ext

// clang-format on
