#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>

namespace RED4ext
{
namespace quest
{
struct SetAsCrowdObstacle_NodeTypeParams
{
    static constexpr const char* NAME = "questSetAsCrowdObstacle_NodeTypeParams";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference puppetRef; // 00
    bool enable; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
};
RED4EXT_ASSERT_SIZE(SetAsCrowdObstacle_NodeTypeParams, 0x40);
} // namespace quest
using questSetAsCrowdObstacle_NodeTypeParams = quest::SetAsCrowdObstacle_NodeTypeParams;
} // namespace RED4ext

// clang-format on
