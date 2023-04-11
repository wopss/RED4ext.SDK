#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/EventResolverDefinition.hpp>

namespace RED4ext
{
namespace AI { struct ArgumentMapping; }

namespace AI::behavior
{
struct MountEventResolverDefinition : AI::behavior::EventResolverDefinition
{
    static constexpr const char* NAME = "AIbehaviorMountEventResolverDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> mountData; // 30
    Handle<AI::ArgumentMapping> workspotData; // 40
    Handle<AI::ArgumentMapping> isInstant; // 50
    CName behaviorCallbackName; // 60
};
RED4EXT_ASSERT_SIZE(MountEventResolverDefinition, 0x68);
} // namespace AI::behavior
using AIbehaviorMountEventResolverDefinition = AI::behavior::MountEventResolverDefinition;
} // namespace RED4ext

// clang-format on
