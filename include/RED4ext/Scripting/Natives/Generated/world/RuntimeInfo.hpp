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
struct RuntimeInfo : IScriptable
{
    static constexpr const char* NAME = "worldRuntimeInfo";
    static constexpr const char* ALIAS = "RuntimeInfo";

    uint8_t unk40[0x80 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(RuntimeInfo, 0x80);
} // namespace world
using worldRuntimeInfo = world::RuntimeInfo;
using RuntimeInfo = world::RuntimeInfo;
} // namespace RED4ext

// clang-format on
