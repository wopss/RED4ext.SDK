#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/community/ESquadType.hpp>

namespace RED4ext
{
namespace community
{
struct SquadInitializerEntry
{
    static constexpr const char* NAME = "communitySquadInitializerEntry";
    static constexpr const char* ALIAS = NAME;

    community::ESquadType type; // 00
    uint8_t unk01[0x8 - 0x1]; // 1
    CName value; // 08
};
RED4EXT_ASSERT_SIZE(SquadInitializerEntry, 0x10);
} // namespace community
using communitySquadInitializerEntry = community::SquadInitializerEntry;
} // namespace RED4ext

// clang-format on
