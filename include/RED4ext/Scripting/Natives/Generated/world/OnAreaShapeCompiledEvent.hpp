#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace world
{
struct OnAreaShapeCompiledEvent
{
    static constexpr const char* NAME = "worldOnAreaShapeCompiledEvent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x1 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(OnAreaShapeCompiledEvent, 0x1);
} // namespace world
using worldOnAreaShapeCompiledEvent = world::OnAreaShapeCompiledEvent;
} // namespace RED4ext

// clang-format on
