#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IVisualComponent.hpp>

namespace RED4ext
{
namespace cp
{
struct __declspec(align(0x10)) ConveyorComponent : ent::IVisualComponent
{
    static constexpr const char* NAME = "cpConveyorComponent";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(ConveyorComponent, 0x140);
} // namespace cp
using cpConveyorComponent = cp::ConveyorComponent;
} // namespace RED4ext

// clang-format on
