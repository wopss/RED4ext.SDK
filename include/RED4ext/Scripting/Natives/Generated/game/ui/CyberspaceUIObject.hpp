#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Object.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/CyberspaceElementType.hpp>

namespace RED4ext
{
namespace game::ui
{
struct CyberspaceUIObject : game::Object
{
    static constexpr const char* NAME = "gameuiCyberspaceUIObject";
    static constexpr const char* ALIAS = NAME;

    CName slotName; // 240
    CString caption; // 248
    game::ui::CyberspaceElementType mappinType; // 268
    uint8_t unk26C[0x280 - 0x26C]; // 26C
};
RED4EXT_ASSERT_SIZE(CyberspaceUIObject, 0x280);
} // namespace game::ui
using gameuiCyberspaceUIObject = game::ui::CyberspaceUIObject;
} // namespace RED4ext

// clang-format on
