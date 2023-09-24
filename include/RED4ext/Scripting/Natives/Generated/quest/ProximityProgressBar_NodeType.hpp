#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/EComparisonType.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IUIManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct ProximityProgressBar_NodeType : quest::IUIManagerNodeType
{
    static constexpr const char* NAME = "questProximityProgressBar_NodeType";
    static constexpr const char* ALIAS = NAME;

    bool show; // 38
    uint8_t unk39[0x3C - 0x39]; // 39
    float duration; // 3C
    bool reset; // 40
    uint8_t unk41[0x44 - 0x41]; // 41
    float distance; // 44
    EComparisonType distanceComparisonType; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
    game::EntityReference target; // 50
    bool isPlayerActivator; // 88
    uint8_t unk89[0x90 - 0x89]; // 89
    game::EntityReference activator; // 90
    CName appearance; // C8
};
RED4EXT_ASSERT_SIZE(ProximityProgressBar_NodeType, 0xD0);
} // namespace quest
using questProximityProgressBar_NodeType = quest::ProximityProgressBar_NodeType;
} // namespace RED4ext

// clang-format on
