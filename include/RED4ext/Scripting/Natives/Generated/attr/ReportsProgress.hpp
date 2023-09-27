#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/attr/Attribute.hpp>

namespace RED4ext
{
namespace attr
{
struct ReportsProgress : attr::Attribute
{
    static constexpr const char* NAME = "attrReportsProgress";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(ReportsProgress, 0x30);
} // namespace attr
using attrReportsProgress = attr::ReportsProgress;
} // namespace RED4ext

// clang-format on
