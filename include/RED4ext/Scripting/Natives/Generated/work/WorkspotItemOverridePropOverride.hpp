#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace work
{
struct WorkspotItemOverridePropOverride
{
    static constexpr const char* NAME = "workWorkspotItemOverridePropOverride";
    static constexpr const char* ALIAS = NAME;

    CName prevItemId; // 00
    CName newItemId; // 08
};
RED4EXT_ASSERT_SIZE(WorkspotItemOverridePropOverride, 0x10);
} // namespace work
using workWorkspotItemOverridePropOverride = work::WorkspotItemOverridePropOverride;
} // namespace RED4ext

// clang-format on
