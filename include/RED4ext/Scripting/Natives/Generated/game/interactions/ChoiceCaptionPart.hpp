#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game::interactions { 
struct ChoiceCaptionPart : IScriptable
{
    static constexpr const char* NAME = "gameinteractionsChoiceCaptionPart";
    static constexpr const char* ALIAS = "InteractionChoiceCaptionPart";

};
RED4EXT_ASSERT_SIZE(ChoiceCaptionPart, 0x40);
} // namespace game::interactions
using InteractionChoiceCaptionPart = game::interactions::ChoiceCaptionPart;
} // namespace RED4ext
