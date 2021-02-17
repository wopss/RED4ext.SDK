#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace game { 
struct MeshDef
{
    static constexpr const char* NAME = "gameMeshDef";
    static constexpr const char* ALIAS = NAME;

    CName componentName; // 00
    uint8_t unk08[0x10 - 0x8]; // 8
};
RED4EXT_ASSERT_SIZE(MeshDef, 0x10);
} // namespace game
} // namespace RED4ext
