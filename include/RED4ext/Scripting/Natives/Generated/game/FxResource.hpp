#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace world { struct Effect; }

namespace game
{
struct FxResource
{
    static constexpr const char* NAME = "gameFxResource";
    static constexpr const char* ALIAS = "FxResource";

    RaRef<world::Effect> effect; // 00
};
RED4EXT_ASSERT_SIZE(FxResource, 0x8);
} // namespace game
using gameFxResource = game::FxResource;
using FxResource = game::FxResource;
} // namespace RED4ext

// clang-format on
