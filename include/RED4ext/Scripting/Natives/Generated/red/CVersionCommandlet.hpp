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
struct CVersionCommandlet : red::ICommandlet
{
    static constexpr const char* NAME = "redCVersionCommandlet";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(CVersionCommandlet, 0x10);
} // namespace red
using redCVersionCommandlet = red::CVersionCommandlet;
} // namespace RED4ext

// clang-format on
