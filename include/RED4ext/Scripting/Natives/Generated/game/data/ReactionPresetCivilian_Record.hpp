#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/ReactionPreset_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct ReactionPresetCivilian_Record : game::data::ReactionPreset_Record
{
    static constexpr const char* NAME = "gamedataReactionPresetCivilian_Record";
    static constexpr const char* ALIAS = "ReactionPresetCivilian_Record";

};
RED4EXT_ASSERT_SIZE(ReactionPresetCivilian_Record, 0xB8);
} // namespace game::data
using gamedataReactionPresetCivilian_Record = game::data::ReactionPresetCivilian_Record;
using ReactionPresetCivilian_Record = game::data::ReactionPresetCivilian_Record;
} // namespace RED4ext

// clang-format on
