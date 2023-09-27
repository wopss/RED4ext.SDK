#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui::arcade
{
struct BoundingShape : IScriptable
{
    static constexpr const char* NAME = "gameuiarcadeBoundingShape";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x50 - 0x40]; // 40
    ink::WidgetReference boundingShape; // 50
};
RED4EXT_ASSERT_SIZE(BoundingShape, 0x68);
} // namespace game::ui::arcade
using gameuiarcadeBoundingShape = game::ui::arcade::BoundingShape;
} // namespace RED4ext

// clang-format on
