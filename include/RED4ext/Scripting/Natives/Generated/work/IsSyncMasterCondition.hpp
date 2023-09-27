#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/work/IWorkspotCondition.hpp>

namespace RED4ext
{
namespace work
{
struct IsSyncMasterCondition : work::IWorkspotCondition
{
    static constexpr const char* NAME = "workIsSyncMasterCondition";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IsSyncMasterCondition, 0x38);
} // namespace work
using workIsSyncMasterCondition = work::IsSyncMasterCondition;
} // namespace RED4ext

// clang-format on
