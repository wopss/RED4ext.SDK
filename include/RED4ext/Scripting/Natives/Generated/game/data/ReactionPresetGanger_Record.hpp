#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/ReactionPreset_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct ReactionPresetGanger_Record : game::data::ReactionPreset_Record
{
    static constexpr const char* NAME = "gamedataReactionPresetGanger_Record";
    static constexpr const char* ALIAS = "ReactionPresetGanger_Record";

};
RED4EXT_ASSERT_SIZE(ReactionPresetGanger_Record, 0x68);
} // namespace game::data
using ReactionPresetGanger_Record = game::data::ReactionPresetGanger_Record;
} // namespace RED4ext
