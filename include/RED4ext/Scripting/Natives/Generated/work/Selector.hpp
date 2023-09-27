#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/work/RandomList.hpp>

namespace RED4ext
{
namespace work
{
struct Selector : work::RandomList
{
    static constexpr const char* NAME = "workSelector";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(Selector, 0x78);
} // namespace work
using workSelector = work::Selector;
} // namespace RED4ext

// clang-format on
