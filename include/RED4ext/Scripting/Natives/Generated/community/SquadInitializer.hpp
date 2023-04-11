#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/community/SpawnInitializer.hpp>
#include <RED4ext/Scripting/Natives/Generated/community/SquadInitializerEntry.hpp>

namespace RED4ext
{
namespace community
{
struct SquadInitializer : community::SpawnInitializer
{
    static constexpr const char* NAME = "communitySquadInitializer";
    static constexpr const char* ALIAS = NAME;

    DynArray<community::SquadInitializerEntry> entries; // 30
};
RED4EXT_ASSERT_SIZE(SquadInitializer, 0x40);
} // namespace community
using communitySquadInitializer = community::SquadInitializer;
} // namespace RED4ext

// clang-format on
