#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace world
{
struct RenderingScriptInterface : IScriptable
{
    static constexpr const char* NAME = "worldRenderingScriptInterface";
    static constexpr const char* ALIAS = "RenderingSystem";

    uint8_t unk40[0x48 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(RenderingScriptInterface, 0x48);
} // namespace world
using worldRenderingScriptInterface = world::RenderingScriptInterface;
using RenderingSystem = world::RenderingScriptInterface;
} // namespace RED4ext

// clang-format on
