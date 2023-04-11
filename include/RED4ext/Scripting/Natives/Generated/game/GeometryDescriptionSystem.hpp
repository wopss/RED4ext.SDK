#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game
{
struct GeometryDescriptionSystem : IScriptable
{
    static constexpr const char* NAME = "gameGeometryDescriptionSystem";
    static constexpr const char* ALIAS = "GeometryDescriptionSystem";

    uint8_t unk40[0x48 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(GeometryDescriptionSystem, 0x48);
} // namespace game
using gameGeometryDescriptionSystem = game::GeometryDescriptionSystem;
using GeometryDescriptionSystem = game::GeometryDescriptionSystem;
} // namespace RED4ext

// clang-format on
