#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/ChoiceCaptionPart.hpp>

namespace RED4ext
{
namespace game::interactions
{
struct ChoiceCaptionScriptPart : game::interactions::ChoiceCaptionPart
{
    static constexpr const char* NAME = "gameinteractionsChoiceCaptionScriptPart";
    static constexpr const char* ALIAS = "InteractionChoiceCaptionScriptPart";

};
RED4EXT_ASSERT_SIZE(ChoiceCaptionScriptPart, 0x40);
} // namespace game::interactions
using gameinteractionsChoiceCaptionScriptPart = game::interactions::ChoiceCaptionScriptPart;
using InteractionChoiceCaptionScriptPart = game::interactions::ChoiceCaptionScriptPart;
} // namespace RED4ext

// clang-format on
