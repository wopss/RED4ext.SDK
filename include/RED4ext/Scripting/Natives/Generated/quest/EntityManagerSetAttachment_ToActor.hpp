#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Quaternion.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/AttachmentOffsetMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IEntityManagerSetAttachment_NodeSubType.hpp>

namespace RED4ext
{
namespace quest
{
struct __declspec(align(0x10)) EntityManagerSetAttachment_ToActor : quest::IEntityManagerSetAttachment_NodeSubType
{
    static constexpr const char* NAME = "questEntityManagerSetAttachment_ToActor";
    static constexpr const char* ALIAS = NAME;

    NodeRef attachmentRef; // 30
    game::EntityReference objectRef; // 38
    bool isPlayer; // 70
    uint8_t unk71[0x78 - 0x71]; // 71
    CName slot; // 78
    quest::AttachmentOffsetMode offsetMode; // 80
    uint8_t unk81[0x84 - 0x81]; // 81
    Vector3 customOffsetPos; // 84
    Quaternion customOffsetRot; // 90
};
RED4EXT_ASSERT_SIZE(EntityManagerSetAttachment_ToActor, 0xA0);
} // namespace quest
using questEntityManagerSetAttachment_ToActor = quest::EntityManagerSetAttachment_ToActor;
} // namespace RED4ext

// clang-format on
