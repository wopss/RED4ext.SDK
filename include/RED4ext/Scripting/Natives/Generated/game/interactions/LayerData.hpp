#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace game::interactions
{
struct LayerData
{
    static constexpr const char* NAME = "gameinteractionsLayerData";
    static constexpr const char* ALIAS = "InteractionLayerData";

    CName tag; // 00
};
RED4EXT_ASSERT_SIZE(LayerData, 0x8);
} // namespace game::interactions
using gameinteractionsLayerData = game::interactions::LayerData;
using InteractionLayerData = game::interactions::LayerData;
} // namespace RED4ext

// clang-format on
