#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/game/Object.hpp>
#include <RED4ext/Types/generated/game/ui/CyberspaceElementType.hpp>

namespace RED4ext
{
namespace game::ui { 
struct CyberspaceUIObject : game::Object
{
    static constexpr const char* NAME = "gameuiCyberspaceUIObject";
    static constexpr const char* ALIAS = NAME;

    CName slotName; // 228
    CString caption; // 230
    game::ui::CyberspaceElementType mappinType; // 250
    uint8_t unk254[0x268 - 0x254]; // 254
};
RED4EXT_ASSERT_SIZE(CyberspaceUIObject, 0x268);
} // namespace game::ui
} // namespace RED4ext
