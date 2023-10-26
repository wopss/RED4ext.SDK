#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Quaternion.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>

namespace RED4ext
{
struct CMesh;

namespace world
{
struct __declspec(align(0x10)) FoliageRawItem : ISerializable
{
    static constexpr const char* NAME = "worldFoliageRawItem";
    static constexpr const char* ALIAS = NAME;

    RaRef<CMesh> Mesh; // 30
    CName MeshAppearance; // 38
    Vector3 Position; // 40
    uint8_t unk4C[0x50 - 0x4C]; // 4C
    Quaternion Rotation; // 50
    float Scale; // 60
    uint8_t unk64[0x80 - 0x64]; // 64
};
RED4EXT_ASSERT_SIZE(FoliageRawItem, 0x80);
} // namespace world
using worldFoliageRawItem = world::FoliageRawItem;
} // namespace RED4ext

// clang-format on
