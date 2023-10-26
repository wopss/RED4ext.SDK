#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>

namespace RED4ext
{
struct CBitmapTexture;

namespace world
{
struct __declspec(align(0x10)) DistantGINode : world::Node
{
    static constexpr const char* NAME = "worldDistantGINode";
    static constexpr const char* ALIAS = NAME;

    RaRef<CBitmapTexture> dataAlbedo; // 38
    RaRef<CBitmapTexture> dataNormal; // 40
    RaRef<CBitmapTexture> dataHeight; // 48
    Vector4 sectorSpan; // 50
};
RED4EXT_ASSERT_SIZE(DistantGINode, 0x60);
} // namespace world
using worldDistantGINode = world::DistantGINode;
} // namespace RED4ext

// clang-format on
