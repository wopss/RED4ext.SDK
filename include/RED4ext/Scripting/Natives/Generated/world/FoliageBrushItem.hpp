#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/FoliageBrushParams.hpp>

namespace RED4ext
{
struct CMesh;

namespace world
{
struct FoliageBrushItem : ISerializable
{
    static constexpr const char* NAME = "worldFoliageBrushItem";
    static constexpr const char* ALIAS = NAME;

    Ref<CMesh> Mesh; // 30
    CName MeshAppearance; // 48
    world::FoliageBrushParams Params; // 50
    bool Selected; // 5C
    uint8_t unk5D[0x60 - 0x5D]; // 5D
};
RED4EXT_ASSERT_SIZE(FoliageBrushItem, 0x60);
} // namespace world
using worldFoliageBrushItem = world::FoliageBrushItem;
} // namespace RED4ext

// clang-format on
