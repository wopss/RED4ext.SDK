#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalFolderEntry.hpp>

namespace RED4ext
{
namespace game { struct JournalDescriptorResource; }

namespace game { 
struct JournalRootFolderEntry : game::JournalFolderEntry
{
    static constexpr const char* NAME = "gameJournalRootFolderEntry";
    static constexpr const char* ALIAS = NAME;

    RaRef<game::JournalDescriptorResource> descriptor; // 98
};
RED4EXT_ASSERT_SIZE(JournalRootFolderEntry, 0xA0);
} // namespace game
} // namespace RED4ext
