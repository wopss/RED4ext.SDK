#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/CTreeNodeActionDefinition.hpp>

namespace RED4ext
{
namespace AI
{
struct CTreeNodeActionReloadWeaponDefinition : AI::CTreeNodeActionDefinition
{
    static constexpr const char* NAME = "AICTreeNodeActionReloadWeaponDefinition";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(CTreeNodeActionReloadWeaponDefinition, 0x48);
} // namespace AI
using AICTreeNodeActionReloadWeaponDefinition = AI::CTreeNodeActionReloadWeaponDefinition;
} // namespace RED4ext

// clang-format on
