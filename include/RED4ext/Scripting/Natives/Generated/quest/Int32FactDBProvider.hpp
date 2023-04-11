#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IInt32ValueProvider.hpp>

namespace RED4ext
{
namespace quest
{
struct Int32FactDBProvider : quest::IInt32ValueProvider
{
    static constexpr const char* NAME = "questInt32FactDBProvider";
    static constexpr const char* ALIAS = NAME;

    CName factName; // 30
};
RED4EXT_ASSERT_SIZE(Int32FactDBProvider, 0x38);
} // namespace quest
using questInt32FactDBProvider = quest::Int32FactDBProvider;
} // namespace RED4ext

// clang-format on
