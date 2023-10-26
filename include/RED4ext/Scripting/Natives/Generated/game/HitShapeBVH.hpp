#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/HitShapeBVH.hpp>

namespace RED4ext
{
namespace game
{
struct __declspec(align(0x10)) HitShapeBVH
{
    static constexpr const char* NAME = "gameHitShapeBVH";
    static constexpr const char* ALIAS = NAME;

    CName nodeName; // 00
    DynArray<game::HitShapeBVH> childrenNodes; // 08
    DynArray<CName> childrenShapeNames; // 18
    uint8_t unk28[0x90 - 0x28]; // 28
};
RED4EXT_ASSERT_SIZE(HitShapeBVH, 0x90);
} // namespace game
using gameHitShapeBVH = game::HitShapeBVH;
} // namespace RED4ext

// clang-format on
