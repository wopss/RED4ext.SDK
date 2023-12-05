#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IComponent.hpp>

namespace RED4ext
{
namespace ent
{
struct MechanicalImpactComponent : ent::IComponent
{
    static constexpr const char* NAME = "entMechanicalImpactComponent";
    static constexpr const char* ALIAS = "MechanicalImpactComponent";

};
RED4EXT_ASSERT_SIZE(MechanicalImpactComponent, 0x90);
} // namespace ent
using entMechanicalImpactComponent = ent::MechanicalImpactComponent;
using MechanicalImpactComponent = ent::MechanicalImpactComponent;
} // namespace RED4ext

// clang-format on
