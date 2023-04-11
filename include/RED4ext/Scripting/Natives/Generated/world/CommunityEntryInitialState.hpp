#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace world
{
struct CommunityEntryInitialState
{
    static constexpr const char* NAME = "worldCommunityEntryInitialState";
    static constexpr const char* ALIAS = NAME;

    CName entryName; // 00
    CName initialPhaseName; // 08
    bool entryActiveOnStart; // 10
    uint8_t unk11[0x18 - 0x11]; // 11
};
RED4EXT_ASSERT_SIZE(CommunityEntryInitialState, 0x18);
} // namespace world
using worldCommunityEntryInitialState = world::CommunityEntryInitialState;
} // namespace RED4ext

// clang-format on
