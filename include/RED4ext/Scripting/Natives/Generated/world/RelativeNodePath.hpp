#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/RelativeNodePathElement.hpp>

namespace RED4ext
{
namespace world
{
struct RelativeNodePath
{
    static constexpr const char* NAME = "worldRelativeNodePath";
    static constexpr const char* ALIAS = NAME;

    uint32_t parentsToSkip; // 00
    uint8_t unk04[0x8 - 0x4]; // 4
    DynArray<world::RelativeNodePathElement> elements; // 08
};
RED4EXT_ASSERT_SIZE(RelativeNodePath, 0x18);
} // namespace world
using worldRelativeNodePath = world::RelativeNodePath;
} // namespace RED4ext

// clang-format on
