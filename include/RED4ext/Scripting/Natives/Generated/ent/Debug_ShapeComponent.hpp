#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Color.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/Debug_ShapeType.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IVisualComponent.hpp>

namespace RED4ext
{
namespace ent
{
struct __declspec(align(0x10)) Debug_ShapeComponent : ent::IVisualComponent
{
    static constexpr const char* NAME = "entDebug_ShapeComponent";
    static constexpr const char* ALIAS = NAME;

    ent::Debug_ShapeType shape; // 140
    uint8_t unk141[0x142 - 0x141]; // 141
    Color color; // 142
    uint8_t unk146[0x148 - 0x146]; // 146
    float radius; // 148
    float halfHeight; // 14C
};
RED4EXT_ASSERT_SIZE(Debug_ShapeComponent, 0x150);
} // namespace ent
using entDebug_ShapeComponent = ent::Debug_ShapeComponent;
} // namespace RED4ext

// clang-format on
