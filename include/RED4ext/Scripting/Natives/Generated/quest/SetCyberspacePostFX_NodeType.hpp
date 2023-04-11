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
struct SetCyberspacePostFX_NodeType : quest::IRenderFxManagerNodeType
{
    static constexpr const char* NAME = "questSetCyberspacePostFX_NodeType";
    static constexpr const char* ALIAS = NAME;

    bool enabled; // 38
    bool fullScreen; // 39
    bool vfx; // 3A
    uint8_t unk3B[0x3C - 0x3B]; // 3B
    float initialDatamosh; // 3C
    float targetDatamosh; // 40
    float initialTreshold; // 44
    float targetTreshold; // 48
    float timeBlend; // 4C
};
RED4EXT_ASSERT_SIZE(SetCyberspacePostFX_NodeType, 0x50);
} // namespace quest
using questSetCyberspacePostFX_NodeType = quest::SetCyberspacePostFX_NodeType;
} // namespace RED4ext

// clang-format on
