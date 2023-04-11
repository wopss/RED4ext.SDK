#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/EAddRemoveItemType.hpp>

namespace RED4ext
{
namespace quest { struct UniversalRef; }

namespace quest
{
struct AddRemoveItem_NodeTypeParams : ISerializable
{
    static constexpr const char* NAME = "questAddRemoveItem_NodeTypeParams";
    static constexpr const char* ALIAS = NAME;

    bool sendNotification; // 30
    bool flagItemAddedCallbackAsSilent; // 31
    bool isPlayer; // 32
    uint8_t unk33[0x38 - 0x33]; // 33
    game::EntityReference objectRef; // 38
    Handle<quest::UniversalRef> entityRef; // 70
    quest::EAddRemoveItemType nodeType; // 80
    int32_t quantity; // 84
    bool removeAllQuantity; // 88
    uint8_t unk89[0x8C - 0x89]; // 89
    TweakDBID itemID; // 8C
    uint8_t unk94[0x98 - 0x94]; // 94
    CName tagToRemove; // 98
    DynArray<TweakDBID> itemIDsToIgnoreOnRemove; // A0
    DynArray<CName> tagsToIgnoreOnRemove; // B0
};
RED4EXT_ASSERT_SIZE(AddRemoveItem_NodeTypeParams, 0xC0);
} // namespace quest
using questAddRemoveItem_NodeTypeParams = quest::AddRemoveItem_NodeTypeParams;
} // namespace RED4ext

// clang-format on
