#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/Transform.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/NodeDefinition.hpp>

namespace RED4ext
{
namespace game::interactions { struct CFunctorDefinition; }
namespace game::interactions { struct IShapeDefinition; }

namespace game::interactions
{
struct __declspec(align(0x10)) CHotSpotAreaFilterDefinition : game::interactions::NodeDefinition
{
    static constexpr const char* NAME = "gameinteractionsCHotSpotAreaFilterDefinition";
    static constexpr const char* ALIAS = NAME;

    CName slotName; // 48
    Transform transform; // 50
    DynArray<Handle<game::interactions::IShapeDefinition>> shapes; // 70
    DynArray<Handle<game::interactions::IShapeDefinition>> negativeShapes; // 80
    Handle<game::interactions::CFunctorDefinition> functor; // 90
};
RED4EXT_ASSERT_SIZE(CHotSpotAreaFilterDefinition, 0xA0);
} // namespace game::interactions
using gameinteractionsCHotSpotAreaFilterDefinition = game::interactions::CHotSpotAreaFilterDefinition;
} // namespace RED4ext

// clang-format on
