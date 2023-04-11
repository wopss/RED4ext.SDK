#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>

namespace RED4ext
{
namespace game::interactions { struct CLinkedLayersDefinition; }

namespace game::interactions
{
struct CHotSpotDefinition
{
    static constexpr const char* NAME = "gameinteractionsCHotSpotDefinition";
    static constexpr const char* ALIAS = NAME;

    DynArray<Handle<game::interactions::CLinkedLayersDefinition>> layersDefinition; // 00
    bool suppressor; // 10
    uint8_t unk11[0xB0 - 0x11]; // 11
};
RED4EXT_ASSERT_SIZE(CHotSpotDefinition, 0xB0);
} // namespace game::interactions
using gameinteractionsCHotSpotDefinition = game::interactions::CHotSpotDefinition;
} // namespace RED4ext

// clang-format on
