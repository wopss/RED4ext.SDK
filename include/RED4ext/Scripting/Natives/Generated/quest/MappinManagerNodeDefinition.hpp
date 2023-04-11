#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/DisableableNodeDefinition.hpp>

namespace RED4ext
{
namespace game { struct JournalPath; }

namespace quest
{
struct MappinManagerNodeDefinition : quest::DisableableNodeDefinition
{
    static constexpr const char* NAME = "questMappinManagerNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<game::JournalPath> path; // 48
    bool disablePreviousMappins; // 58
    uint8_t unk59[0x60 - 0x59]; // 59
};
RED4EXT_ASSERT_SIZE(MappinManagerNodeDefinition, 0x60);
} // namespace quest
using questMappinManagerNodeDefinition = quest::MappinManagerNodeDefinition;
} // namespace RED4ext

// clang-format on
