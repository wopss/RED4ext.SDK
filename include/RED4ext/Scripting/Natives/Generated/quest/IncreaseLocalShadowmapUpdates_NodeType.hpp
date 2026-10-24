#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IRenderFxManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct IncreaseLocalShadowmapUpdates_NodeType : quest::IRenderFxManagerNodeType
{
    static constexpr const char* NAME = "questIncreaseLocalShadowmapUpdates_NodeType";
    static constexpr const char* ALIAS = NAME;

    bool enabled; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
};
RED4EXT_ASSERT_SIZE(IncreaseLocalShadowmapUpdates_NodeType, 0x40);
} // namespace quest
using questIncreaseLocalShadowmapUpdates_NodeType = quest::IncreaseLocalShadowmapUpdates_NodeType;
} // namespace RED4ext

// clang-format on
