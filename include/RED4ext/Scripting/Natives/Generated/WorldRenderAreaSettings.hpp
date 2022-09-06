#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>

namespace RED4ext
{
struct IAreaSettings;

struct WorldRenderAreaSettings
{
    static constexpr const char* NAME = "WorldRenderAreaSettings";
    static constexpr const char* ALIAS = NAME;

    DynArray<Handle<IAreaSettings>> areaParameters; // 00
};
RED4EXT_ASSERT_SIZE(WorldRenderAreaSettings, 0x10);
} // namespace RED4ext

// clang-format on
