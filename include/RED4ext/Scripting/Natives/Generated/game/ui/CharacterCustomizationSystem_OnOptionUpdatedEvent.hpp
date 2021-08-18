#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::ui { struct CharacterCustomizationOption; }

namespace game::ui { 
struct CharacterCustomizationSystem_OnOptionUpdatedEvent : red::Event
{
    static constexpr const char* NAME = "gameuiCharacterCustomizationSystem_OnOptionUpdatedEvent";
    static constexpr const char* ALIAS = NAME;

    WeakHandle<game::ui::CharacterCustomizationOption> option; // 40
};
RED4EXT_ASSERT_SIZE(CharacterCustomizationSystem_OnOptionUpdatedEvent, 0x50);
} // namespace game::ui
} // namespace RED4ext
