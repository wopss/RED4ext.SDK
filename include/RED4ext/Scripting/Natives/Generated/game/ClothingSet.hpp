#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/SSlotVisualInfo.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/WardrobeClothingSetIndex.hpp>

namespace RED4ext
{
namespace game
{
struct ClothingSet : IScriptable
{
    static constexpr const char* NAME = "gameClothingSet";
    static constexpr const char* ALIAS = "ClothingSet";

    game::WardrobeClothingSetIndex setID; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
    DynArray<game::SSlotVisualInfo> clothingList; // 48
    TweakDBID iconID; // 58
};
RED4EXT_ASSERT_SIZE(ClothingSet, 0x60);
} // namespace game
using gameClothingSet = game::ClothingSet;
using ClothingSet = game::ClothingSet;
} // namespace RED4ext

// clang-format on
