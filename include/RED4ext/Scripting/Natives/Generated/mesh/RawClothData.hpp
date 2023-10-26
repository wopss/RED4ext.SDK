#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/cloth/State.hpp>

namespace RED4ext
{
namespace mesh
{
struct __declspec(align(0x10)) RawClothData
{
    static constexpr const char* NAME = "meshRawClothData";
    static constexpr const char* ALIAS = NAME;

    physics::cloth::State state; // 00
    DynArray<DataBuffer> maxDistanceChannel; // C0
    DynArray<DataBuffer> maxDistanceExtChannel; // D0
    DynArray<DataBuffer> backstopDistanceChannel; // E0
    DynArray<DataBuffer> backstopRadiusChannel; // F0
    DynArray<DataBuffer> selfCollisionChannel; // 100
};
RED4EXT_ASSERT_SIZE(RawClothData, 0x110);
} // namespace mesh
using meshRawClothData = mesh::RawClothData;
} // namespace RED4ext

// clang-format on
