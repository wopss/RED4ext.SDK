#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/work/WorkspotItemOverrideItemOverride.hpp>
#include <RED4ext/Scripting/Natives/Generated/work/WorkspotItemOverridePropOverride.hpp>

namespace RED4ext
{
namespace work
{
struct WorkspotItemOverride
{
    static constexpr const char* NAME = "workWorkspotItemOverride";
    static constexpr const char* ALIAS = NAME;

    DynArray<work::WorkspotItemOverridePropOverride> propOverrides; // 00
    DynArray<work::WorkspotItemOverrideItemOverride> itemOverrides; // 10
};
RED4EXT_ASSERT_SIZE(WorkspotItemOverride, 0x20);
} // namespace work
using workWorkspotItemOverride = work::WorkspotItemOverride;
} // namespace RED4ext

// clang-format on
