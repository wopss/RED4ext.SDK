#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/Context.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IUIConditionType.hpp>

namespace RED4ext
{
namespace quest
{
struct UIContextState_ConditionType : quest::IUIConditionType
{
    static constexpr const char* NAME = "questUIContextState_ConditionType";
    static constexpr const char* ALIAS = NAME;

    game::ui::Context state; // 38
    bool active; // 3C
    uint8_t unk3D[0x40 - 0x3D]; // 3D
};
RED4EXT_ASSERT_SIZE(UIContextState_ConditionType, 0x40);
} // namespace quest
using questUIContextState_ConditionType = quest::UIContextState_ConditionType;
} // namespace RED4ext

// clang-format on
