#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace anim
{
struct StackTracksExtender_JsonEntry
{
    static constexpr const char* NAME = "animStackTracksExtender_JsonEntry";
    static constexpr const char* ALIAS = NAME;

    CName name; // 00
    float referenceValue; // 08
    uint8_t unk0C[0x10 - 0xC]; // C
};
RED4EXT_ASSERT_SIZE(StackTracksExtender_JsonEntry, 0x10);
} // namespace anim
using animStackTracksExtender_JsonEntry = anim::StackTracksExtender_JsonEntry;
} // namespace RED4ext

// clang-format on
