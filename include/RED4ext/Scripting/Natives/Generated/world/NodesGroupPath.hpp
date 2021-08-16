#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>

namespace RED4ext
{
namespace world { 
struct NodesGroupPath
{
    static constexpr const char* NAME = "worldNodesGroupPath";
    static constexpr const char* ALIAS = NAME;

    DynArray<CName> elements; // 00
};
RED4EXT_ASSERT_SIZE(NodesGroupPath, 0x10);
} // namespace world
} // namespace RED4ext
