#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/CMesh.hpp>

namespace RED4ext
{
struct CPhysicsDecorationResource : CMesh
{
    static constexpr const char* NAME = "CPhysicsDecorationResource";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk220[0x230 - 0x220]; // 220
};
RED4EXT_ASSERT_SIZE(CPhysicsDecorationResource, 0x230);
} // namespace RED4ext
