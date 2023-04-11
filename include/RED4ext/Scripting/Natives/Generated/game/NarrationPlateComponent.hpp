#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IComponent.hpp>

namespace RED4ext
{
namespace game
{
struct NarrationPlateComponent : ent::IComponent
{
    static constexpr const char* NAME = "gameNarrationPlateComponent";
    static constexpr const char* ALIAS = "NarrationPlateComponent";

    CName narrationText; // 90
    CName narrationCaption; // 98
};
RED4EXT_ASSERT_SIZE(NarrationPlateComponent, 0xA0);
} // namespace game
using gameNarrationPlateComponent = game::NarrationPlateComponent;
using NarrationPlateComponent = game::NarrationPlateComponent;
} // namespace RED4ext

// clang-format on
