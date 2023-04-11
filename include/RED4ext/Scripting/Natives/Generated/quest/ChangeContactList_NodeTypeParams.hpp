#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>

namespace RED4ext
{
namespace game { struct JournalPath; }

namespace quest
{
struct ChangeContactList_NodeTypeParams
{
    static constexpr const char* NAME = "questChangeContactList_NodeTypeParams";
    static constexpr const char* ALIAS = NAME;

    Handle<game::JournalPath> contact; // 00
    bool addContact; // 10
    bool sendNotification; // 11
    uint8_t unk12[0x18 - 0x12]; // 12
};
RED4EXT_ASSERT_SIZE(ChangeContactList_NodeTypeParams, 0x18);
} // namespace quest
using questChangeContactList_NodeTypeParams = quest::ChangeContactList_NodeTypeParams;
} // namespace RED4ext

// clang-format on
