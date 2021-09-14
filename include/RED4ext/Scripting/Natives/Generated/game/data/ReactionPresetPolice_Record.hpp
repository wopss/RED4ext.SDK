#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/ReactionPreset_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct ReactionPresetPolice_Record : game::data::ReactionPreset_Record
{
    static constexpr const char* NAME = "gamedataReactionPresetPolice_Record";
    static constexpr const char* ALIAS = "ReactionPresetPolice_Record";

};
RED4EXT_ASSERT_SIZE(ReactionPresetPolice_Record, 0x68);
} // namespace game::data
using ReactionPresetPolice_Record = game::data::ReactionPresetPolice_Record;
} // namespace RED4ext
