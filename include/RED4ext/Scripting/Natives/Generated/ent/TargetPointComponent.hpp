#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IPlacedComponent.hpp>

namespace RED4ext
{
namespace ent { 
struct TargetPointComponent : ent::IPlacedComponent
{
    static constexpr const char* NAME = "entTargetPointComponent";
    static constexpr const char* ALIAS = "TargetPointComponent";

};
RED4EXT_ASSERT_SIZE(TargetPointComponent, 0x120);
} // namespace ent
using TargetPointComponent = ent::TargetPointComponent;
} // namespace RED4ext
