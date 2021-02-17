#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>

namespace RED4ext
{
namespace mesh { 
struct LocalMaterialHeader
{
    static constexpr const char* NAME = "meshLocalMaterialHeader";
    static constexpr const char* ALIAS = NAME;

    uint32_t offset; // 00
    uint32_t size; // 04
};
RED4EXT_ASSERT_SIZE(LocalMaterialHeader, 0x8);
} // namespace mesh
} // namespace RED4ext
