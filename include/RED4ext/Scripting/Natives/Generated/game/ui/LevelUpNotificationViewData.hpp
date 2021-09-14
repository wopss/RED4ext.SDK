#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/GenericNotificationViewData.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/LevelUpData.hpp>

namespace RED4ext
{
namespace game::data { struct Proficiency_Record; }

namespace game::ui { 
struct LevelUpNotificationViewData : game::ui::GenericNotificationViewData
{
    static constexpr const char* NAME = "gameuiLevelUpNotificationViewData";
    static constexpr const char* ALIAS = "LevelUpNotificationViewData";

    bool canBeMerged; // 90
    uint8_t unk91[0x94 - 0x91]; // 91
    quest::LevelUpData levelupdata; // 94
    Handle<game::data::Proficiency_Record> proficiencyRecord; // A8
    CString profString; // B8
};
RED4EXT_ASSERT_SIZE(LevelUpNotificationViewData, 0xD8);
} // namespace game::ui
using LevelUpNotificationViewData = game::ui::LevelUpNotificationViewData;
} // namespace RED4ext
