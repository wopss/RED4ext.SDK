#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IEntityManagerSetAttachment_NodeSubType.hpp>

namespace RED4ext
{
namespace quest
{
struct EntityManagerDestroyCarriedObject : quest::IEntityManagerSetAttachment_NodeSubType
{
    static constexpr const char* NAME = "questEntityManagerDestroyCarriedObject";
    static constexpr const char* ALIAS = NAME;

    NodeRef attachmentRef; // 30
    game::EntityReference objectRef; // 38
    bool isPlayer; // 70
    uint8_t unk71[0x78 - 0x71]; // 71
};
RED4EXT_ASSERT_SIZE(EntityManagerDestroyCarriedObject, 0x78);
} // namespace quest
using questEntityManagerDestroyCarriedObject = quest::EntityManagerDestroyCarriedObject;
} // namespace RED4ext

// clang-format on
