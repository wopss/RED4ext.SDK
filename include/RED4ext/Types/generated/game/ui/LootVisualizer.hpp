#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/ui/IChoiceVisualizer.hpp>

namespace RED4ext
{
namespace game::ui { 
struct LootVisualizer : game::ui::IChoiceVisualizer
{
    static constexpr const char* NAME = "gameuiLootVisualizer";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(LootVisualizer, 0x30);
} // namespace game::ui
} // namespace RED4ext
