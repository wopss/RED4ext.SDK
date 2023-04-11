#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/ICommandlet.hpp>

namespace RED4ext
{
namespace red
{
struct CHelpCommandlet : red::ICommandlet
{
    static constexpr const char* NAME = "redCHelpCommandlet";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(CHelpCommandlet, 0x10);
} // namespace red
using redCHelpCommandlet = red::CHelpCommandlet;
} // namespace RED4ext

// clang-format on
