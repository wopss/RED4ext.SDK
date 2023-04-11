#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace scn
{
struct LookAtBodyPartPropertiesAdvanced
{
    static constexpr const char* NAME = "scnLookAtBodyPartPropertiesAdvanced";
    static constexpr const char* ALIAS = NAME;

    CName bodyPartName; // 00
};
RED4EXT_ASSERT_SIZE(LookAtBodyPartPropertiesAdvanced, 0x8);
} // namespace scn
using scnLookAtBodyPartPropertiesAdvanced = scn::LookAtBodyPartPropertiesAdvanced;
} // namespace RED4ext

// clang-format on
