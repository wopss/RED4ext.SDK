#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Box.hpp>
#include <RED4ext/Scripting/Natives/Generated/vis/IOccluderResource.hpp>

namespace RED4ext
{
namespace vis
{
struct __declspec(align(0x10)) OccluderMeshResource : vis::IOccluderResource
{
    static constexpr const char* NAME = "visOccluderMeshResource";
    static constexpr const char* ALIAS = NAME;

    uint32_t resourceVersion; // 38
    uint8_t unk3C[0x40 - 0x3C]; // 3C
    DataBuffer vertices; // 40
    DataBuffer indices; // 68
    Box boundingBox; // 90
    bool twoSided; // B0
    uint8_t unkB1[0xC0 - 0xB1]; // B1
};
RED4EXT_ASSERT_SIZE(OccluderMeshResource, 0xC0);
} // namespace vis
using visOccluderMeshResource = vis::OccluderMeshResource;
} // namespace RED4ext

// clang-format on
