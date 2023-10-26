#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IPlacedComponent.hpp>

namespace RED4ext
{
namespace sense { struct VisibleObject; }

namespace sense
{
struct __declspec(align(0x10)) VisibleObjectComponent : ent::IPlacedComponent
{
    static constexpr const char* NAME = "senseVisibleObjectComponent";
    static constexpr const char* ALIAS = "VisibleObjectComponent";

    Handle<sense::VisibleObject> visibleObject; // 120
    uint8_t unk130[0x140 - 0x130]; // 130
};
RED4EXT_ASSERT_SIZE(VisibleObjectComponent, 0x140);
} // namespace sense
using senseVisibleObjectComponent = sense::VisibleObjectComponent;
using VisibleObjectComponent = sense::VisibleObjectComponent;
} // namespace RED4ext

// clang-format on
