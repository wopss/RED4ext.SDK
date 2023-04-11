#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace AI { struct Archetype; }

namespace AI
{
struct ArchetypeSetEntry
{
    static constexpr const char* NAME = "AIArchetypeSetEntry";
    static constexpr const char* ALIAS = NAME;

    CName name; // 00
    Ref<AI::Archetype> resource; // 08
};
RED4EXT_ASSERT_SIZE(ArchetypeSetEntry, 0x20);
} // namespace AI
using AIArchetypeSetEntry = AI::ArchetypeSetEntry;
} // namespace RED4ext

// clang-format on
