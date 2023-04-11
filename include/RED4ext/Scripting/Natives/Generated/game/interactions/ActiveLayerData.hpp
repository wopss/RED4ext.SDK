#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>

namespace RED4ext
{
namespace game { struct Object; }

namespace game::interactions
{
struct ActiveLayerData
{
    static constexpr const char* NAME = "gameinteractionsActiveLayerData";
    static constexpr const char* ALIAS = NAME;

    WeakHandle<game::Object> activator; // 00
    CName linkedLayersName; // 10
    CName layerName; // 18
};
RED4EXT_ASSERT_SIZE(ActiveLayerData, 0x20);
} // namespace game::interactions
using gameinteractionsActiveLayerData = game::interactions::ActiveLayerData;
} // namespace RED4ext

// clang-format on
