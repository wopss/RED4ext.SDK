#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/ArchetypeSetEntry.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>

namespace RED4ext
{
namespace AI
{
struct ArchetypeSet : CResource
{
    static constexpr const char* NAME = "AIArchetypeSet";
    static constexpr const char* ALIAS = NAME;

    DynArray<AI::ArchetypeSetEntry> archetypeResources; // 40
};
RED4EXT_ASSERT_SIZE(ArchetypeSet, 0x50);
} // namespace AI
using AIArchetypeSet = AI::ArchetypeSet;
} // namespace RED4ext

// clang-format on
