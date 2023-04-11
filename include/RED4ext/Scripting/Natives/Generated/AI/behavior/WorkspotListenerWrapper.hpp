#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace AI::behavior
{
struct WorkspotListenerWrapper
{
    static constexpr const char* NAME = "AIbehaviorWorkspotListenerWrapper";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x10 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(WorkspotListenerWrapper, 0x10);
} // namespace AI::behavior
using AIbehaviorWorkspotListenerWrapper = AI::behavior::WorkspotListenerWrapper;
} // namespace RED4ext

// clang-format on
