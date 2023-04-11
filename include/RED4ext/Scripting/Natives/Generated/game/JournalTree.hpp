#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace game { struct JournalRootFolderEntry; }

namespace game
{
struct JournalTree : ISerializable
{
    static constexpr const char* NAME = "gameJournalTree";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x58 - 0x30]; // 30
    DynArray<Handle<game::JournalRootFolderEntry>> rootEntries; // 58
    uint8_t unk68[0xC8 - 0x68]; // 68
};
RED4EXT_ASSERT_SIZE(JournalTree, 0xC8);
} // namespace game
using gameJournalTree = game::JournalTree;
} // namespace RED4ext

// clang-format on
