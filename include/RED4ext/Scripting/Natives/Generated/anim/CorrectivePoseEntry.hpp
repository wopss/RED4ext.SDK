#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>

namespace RED4ext
{
namespace anim
{
struct CorrectivePoseEntry
{
    static constexpr const char* NAME = "animCorrectivePoseEntry";
    static constexpr const char* ALIAS = NAME;

    CName comparePose; // 00
    CName correctivePose; // 08
    DynArray<CName> jointsToCompare; // 10
    bool enabled; // 20
    uint8_t unk21[0x28 - 0x21]; // 21
};
RED4EXT_ASSERT_SIZE(CorrectivePoseEntry, 0x28);
} // namespace anim
using animCorrectivePoseEntry = anim::CorrectivePoseEntry;
} // namespace RED4ext

// clang-format on
