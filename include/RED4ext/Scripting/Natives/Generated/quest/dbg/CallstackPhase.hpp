#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/dbg/CallstackBlock.hpp>

namespace RED4ext
{
namespace quest::dbg
{
struct CallstackPhase : quest::dbg::CallstackBlock
{
    static constexpr const char* NAME = "questdbgCallstackPhase";
    static constexpr const char* ALIAS = NAME;

    DynArray<uint64_t> phases; // 18
    DynArray<uint64_t> blocks; // 28
};
RED4EXT_ASSERT_SIZE(CallstackPhase, 0x38);
} // namespace quest::dbg
using questdbgCallstackPhase = quest::dbg::CallstackPhase;
} // namespace RED4ext

// clang-format on
