#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>

namespace RED4ext
{
namespace quest { struct IInt32ValueProvider; }

namespace quest
{
struct Int32ValueWrapper
{
    static constexpr const char* NAME = "questInt32ValueWrapper";
    static constexpr const char* ALIAS = NAME;

    Handle<quest::IInt32ValueProvider> valueProvider; // 00
};
RED4EXT_ASSERT_SIZE(Int32ValueWrapper, 0x10);
} // namespace quest
using questInt32ValueWrapper = quest::Int32ValueWrapper;
} // namespace RED4ext

// clang-format on
