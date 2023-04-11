#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace quest
{
struct UseWorkspotParams
{
    static constexpr const char* NAME = "questUseWorkspotParams";
    static constexpr const char* ALIAS = NAME;

    NodeRef workspotNode; // 00
    CName forceEntryAnimName; // 08
};
RED4EXT_ASSERT_SIZE(UseWorkspotParams, 0x10);
} // namespace quest
using questUseWorkspotParams = quest::UseWorkspotParams;
} // namespace RED4ext

// clang-format on
