#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PSMBodyCarryingStyle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IEntityManager_NodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct EntityManagerMountPuppet_NodeType : quest::IEntityManager_NodeType
{
    static constexpr const char* NAME = "questEntityManagerMountPuppet_NodeType";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference parentRef; // 30
    game::EntityReference childRef; // 68
    bool isParentPlayer; // A0
    uint8_t unkA1[0xA8 - 0xA1]; // A1
    CName slotName; // A8
    bool assign; // B0
    bool isInstant; // B1
    uint8_t unkB2[0xB4 - 0xB2]; // B2
    game::PSMBodyCarryingStyle forcedCarryStyle; // B4
    bool removePitchRollRotation; // B8
    uint8_t unkB9[0xC0 - 0xB9]; // B9
};
RED4EXT_ASSERT_SIZE(EntityManagerMountPuppet_NodeType, 0xC0);
} // namespace quest
using questEntityManagerMountPuppet_NodeType = quest::EntityManagerMountPuppet_NodeType;
} // namespace RED4ext

// clang-format on
