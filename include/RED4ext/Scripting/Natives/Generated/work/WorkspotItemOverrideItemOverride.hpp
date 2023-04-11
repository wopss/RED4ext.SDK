#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace work
{
struct WorkspotItemOverrideItemOverride
{
    static constexpr const char* NAME = "workWorkspotItemOverrideItemOverride";
    static constexpr const char* ALIAS = NAME;

    TweakDBID prevItemId; // 00
    TweakDBID newItemId; // 08
};
RED4EXT_ASSERT_SIZE(WorkspotItemOverrideItemOverride, 0x10);
} // namespace work
using workWorkspotItemOverrideItemOverride = work::WorkspotItemOverrideItemOverride;
} // namespace RED4ext

// clang-format on
