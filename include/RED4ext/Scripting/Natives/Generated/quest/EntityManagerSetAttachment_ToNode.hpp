#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Quaternion.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IEntityManagerSetAttachment_NodeSubType.hpp>

namespace RED4ext
{
namespace quest
{
struct __declspec(align(0x10)) EntityManagerSetAttachment_ToNode : quest::IEntityManagerSetAttachment_NodeSubType
{
    static constexpr const char* NAME = "questEntityManagerSetAttachment_ToNode";
    static constexpr const char* ALIAS = NAME;

    NodeRef attachmentRef; // 30
    NodeRef objectRef; // 38
    CName slot; // 40
    Vector3 customOffsetPos; // 48
    uint8_t unk54[0x60 - 0x54]; // 54
    Quaternion customOffsetRot; // 60
};
RED4EXT_ASSERT_SIZE(EntityManagerSetAttachment_ToNode, 0x70);
} // namespace quest
using questEntityManagerSetAttachment_ToNode = quest::EntityManagerSetAttachment_ToNode;
} // namespace RED4ext

// clang-format on
