#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/HitShapeBase.hpp>

namespace RED4ext
{
namespace game
{
struct __declspec(align(0x10)) HitShape_ColliderComponent : game::HitShapeBase
{
    static constexpr const char* NAME = "gameHitShape_ColliderComponent";
    static constexpr const char* ALIAS = "HitShape_ColliderComponent";

    DynArray<CName> componentNames; // 90
    uint8_t unkA0[0xB0 - 0xA0]; // A0
};
RED4EXT_ASSERT_SIZE(HitShape_ColliderComponent, 0xB0);
} // namespace game
using gameHitShape_ColliderComponent = game::HitShape_ColliderComponent;
using HitShape_ColliderComponent = game::HitShape_ColliderComponent;
} // namespace RED4ext

// clang-format on
