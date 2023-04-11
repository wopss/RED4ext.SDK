#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/effect/IPlacementEntries.hpp>
#include <RED4ext/Scripting/Natives/Generated/effect/RootEntry.hpp>

namespace RED4ext
{
namespace effect
{
struct RootEntries : effect::IPlacementEntries
{
    static constexpr const char* NAME = "effectRootEntries";
    static constexpr const char* ALIAS = NAME;

    DynArray<effect::RootEntry> roots; // 30
    bool inheritRotation; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
};
RED4EXT_ASSERT_SIZE(RootEntries, 0x48);
} // namespace effect
using effectRootEntries = effect::RootEntries;
} // namespace RED4ext

// clang-format on
