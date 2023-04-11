#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace game::data
{
struct LightPreset
{
    static constexpr const char* NAME = "gamedataLightPreset";
    static constexpr const char* ALIAS = "LightPreset";

    CName lightSourcesName; // 00
    TweakDBID preset; // 08
};
RED4EXT_ASSERT_SIZE(LightPreset, 0x10);
} // namespace game::data
using gamedataLightPreset = game::data::LightPreset;
using LightPreset = game::data::LightPreset;
} // namespace RED4ext

// clang-format on
