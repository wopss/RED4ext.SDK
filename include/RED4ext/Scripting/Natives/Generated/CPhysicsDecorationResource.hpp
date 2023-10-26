#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/CMesh.hpp>

namespace RED4ext
{
struct __declspec(align(0x10)) CPhysicsDecorationResource : CMesh
{
    static constexpr const char* NAME = "CPhysicsDecorationResource";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk230[0x240 - 0x230]; // 230
};
RED4EXT_ASSERT_SIZE(CPhysicsDecorationResource, 0x240);
} // namespace RED4ext

// clang-format on
