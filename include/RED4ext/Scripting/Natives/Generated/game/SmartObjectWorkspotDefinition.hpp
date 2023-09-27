#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/SmartObjectDefinition.hpp>

namespace RED4ext
{
namespace work { struct WorkspotResource; }

namespace game
{
struct SmartObjectWorkspotDefinition : game::SmartObjectDefinition
{
    static constexpr const char* NAME = "gameSmartObjectWorkspotDefinition";
    static constexpr const char* ALIAS = NAME;

    Ref<work::WorkspotResource> workspotTemplate; // 80
};
RED4EXT_ASSERT_SIZE(SmartObjectWorkspotDefinition, 0x98);
} // namespace game
using gameSmartObjectWorkspotDefinition = game::SmartObjectWorkspotDefinition;
} // namespace RED4ext

// clang-format on
