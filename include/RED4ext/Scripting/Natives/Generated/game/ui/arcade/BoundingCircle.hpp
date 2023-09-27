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
struct BoundingCircle : game::ui::arcade::BoundingShape
{
    static constexpr const char* NAME = "gameuiarcadeBoundingCircle";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(BoundingCircle, 0x68);
} // namespace game::ui::arcade
using gameuiarcadeBoundingCircle = game::ui::arcade::BoundingCircle;
} // namespace RED4ext

// clang-format on
