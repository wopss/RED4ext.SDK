#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IComponent.hpp>

namespace RED4ext
{
namespace move { 
struct IMotionPlannerComponent : ent::IComponent
{
    static constexpr const char* NAME = "moveIMotionPlannerComponent";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IMotionPlannerComponent, 0x90);
} // namespace move
} // namespace RED4ext
