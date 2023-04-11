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
struct IsPlayerCondition : work::IWorkspotCondition
{
    static constexpr const char* NAME = "workIsPlayerCondition";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IsPlayerCondition, 0x38);
} // namespace work
using workIsPlayerCondition = work::IsPlayerCondition;
} // namespace RED4ext

// clang-format on
