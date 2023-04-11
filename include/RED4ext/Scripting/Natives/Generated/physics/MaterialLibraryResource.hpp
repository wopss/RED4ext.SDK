#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>

namespace RED4ext
{
namespace physics { struct MaterialResource; }

namespace physics
{
struct MaterialLibraryResource : CResource
{
    static constexpr const char* NAME = "physicsMaterialLibraryResource";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x68 - 0x40]; // 40
    Handle<physics::MaterialResource> defaultMaterial; // 68
    DataBuffer collectionData; // 78
    uint8_t unkA0[0xA8 - 0xA0]; // A0
};
RED4EXT_ASSERT_SIZE(MaterialLibraryResource, 0xA8);
} // namespace physics
using physicsMaterialLibraryResource = physics::MaterialLibraryResource;
} // namespace RED4ext

// clang-format on
