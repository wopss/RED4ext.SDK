#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IPlacedComponent.hpp>

namespace RED4ext
{
namespace ent
{
struct __declspec(align(0x10)) TargetPointComponent : ent::IPlacedComponent
{
    static constexpr const char* NAME = "entTargetPointComponent";
    static constexpr const char* ALIAS = "TargetPointComponent";

};
RED4EXT_ASSERT_SIZE(TargetPointComponent, 0x120);
} // namespace ent
using entTargetPointComponent = ent::TargetPointComponent;
using TargetPointComponent = ent::TargetPointComponent;
} // namespace RED4ext

// clang-format on
