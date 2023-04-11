#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/work/IWorkspotCommandData.hpp>

namespace RED4ext
{
namespace work
{
struct DebugSourceCommandData : work::IWorkspotCommandData
{
    static constexpr const char* NAME = "workDebugSourceCommandData";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(DebugSourceCommandData, 0x8);
} // namespace work
using workDebugSourceCommandData = work::DebugSourceCommandData;
} // namespace RED4ext

// clang-format on
