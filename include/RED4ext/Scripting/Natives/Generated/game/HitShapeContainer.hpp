#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/Color.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/MaterialReference.hpp>

namespace RED4ext
{
namespace game { struct HitShapeUserData; }
namespace game { struct IHitShape; }

namespace game
{
struct HitShapeContainer
{
    static constexpr const char* NAME = "gameHitShapeContainer";
    static constexpr const char* ALIAS = "HitShapeContainer";

    CName name; // 00
    CName slotName; // 08
    Color color; // 10
    uint8_t unk14[0x18 - 0x14]; // 14
    Handle<game::IHitShape> shape; // 18
    Handle<game::HitShapeUserData> userData; // 28
    physics::MaterialReference physicsMaterial; // 38
    uint8_t unk40[0x48 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(HitShapeContainer, 0x48);
} // namespace game
using gameHitShapeContainer = game::HitShapeContainer;
using HitShapeContainer = game::HitShapeContainer;
} // namespace RED4ext

// clang-format on
