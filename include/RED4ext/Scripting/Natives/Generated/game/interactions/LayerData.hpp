#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace game::interactions { 
struct LayerData
{
    static constexpr const char* NAME = "gameinteractionsLayerData";
    static constexpr const char* ALIAS = NAME;

    CName tag; // 00
};
RED4EXT_ASSERT_SIZE(LayerData, 0x8);
} // namespace game::interactions
} // namespace RED4ext
