#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IComponent.hpp>

namespace RED4ext
{
namespace game
{
struct PhysicalDestructionListenerComponent : ent::IComponent
{
    static constexpr const char* NAME = "gamePhysicalDestructionListenerComponent";
    static constexpr const char* ALIAS = NAME;

    CName physicalDestructionComponentName; // 90
    DynArray<float> thresholdLevels; // 98
};
RED4EXT_ASSERT_SIZE(PhysicalDestructionListenerComponent, 0xA8);
} // namespace game
using gamePhysicalDestructionListenerComponent = game::PhysicalDestructionListenerComponent;
} // namespace RED4ext

// clang-format on
