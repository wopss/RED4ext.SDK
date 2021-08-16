#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Quaternion.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/AttachmentOffsetMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IEntityManagerSetAttachment_NodeSubType.hpp>

namespace RED4ext
{
namespace quest { 
struct EntityManagerSetAttachment_ToWorld : quest::IEntityManagerSetAttachment_NodeSubType
{
    static constexpr const char* NAME = "questEntityManagerSetAttachment_ToWorld";
    static constexpr const char* ALIAS = NAME;

    NodeRef attachmentRef; // 30
    quest::AttachmentOffsetMode offsetMode; // 38
    uint8_t unk39[0x3C - 0x39]; // 39
    Vector3 customOffsetPos; // 3C
    uint8_t unk48[0x50 - 0x48]; // 48
    Quaternion customOffsetRot; // 50
};
RED4EXT_ASSERT_SIZE(EntityManagerSetAttachment_ToWorld, 0x60);
} // namespace quest
} // namespace RED4ext
