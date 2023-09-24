#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/arcade/BoundingShape.hpp>

namespace RED4ext
{
namespace game::ui::arcade
{
struct BoundingRect : game::ui::arcade::BoundingShape
{
    static constexpr const char* NAME = "gameuiarcadeBoundingRect";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(BoundingRect, 0x68);
} // namespace game::ui::arcade
using gameuiarcadeBoundingRect = game::ui::arcade::BoundingRect;
} // namespace RED4ext

// clang-format on
