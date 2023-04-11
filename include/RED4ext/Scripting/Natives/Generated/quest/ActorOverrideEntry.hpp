#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace quest
{
struct ActorOverrideEntry
{
    static constexpr const char* NAME = "questActorOverrideEntry";
    static constexpr const char* ALIAS = NAME;

    CName ActorName; // 00
    CName MetadataForOverride; // 08
};
RED4EXT_ASSERT_SIZE(ActorOverrideEntry, 0x10);
} // namespace quest
using questActorOverrideEntry = quest::ActorOverrideEntry;
} // namespace RED4ext

// clang-format on
