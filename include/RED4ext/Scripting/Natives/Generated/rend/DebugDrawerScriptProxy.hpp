#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace rend
{
struct DebugDrawerScriptProxy
{
    static constexpr const char* NAME = "rendDebugDrawerScriptProxy";
    static constexpr const char* ALIAS = "DebugDrawer";

    uint8_t unk00[0x8 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(DebugDrawerScriptProxy, 0x8);
} // namespace rend
using rendDebugDrawerScriptProxy = rend::DebugDrawerScriptProxy;
using DebugDrawer = rend::DebugDrawerScriptProxy;
} // namespace RED4ext

// clang-format on
