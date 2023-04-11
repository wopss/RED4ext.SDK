#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>

namespace RED4ext
{
namespace game::interactions { struct ChoiceCaptionPart; }

namespace game::interactions
{
struct ChoiceCaption
{
    static constexpr const char* NAME = "gameinteractionsChoiceCaption";
    static constexpr const char* ALIAS = "InteractionChoiceCaption";

    DynArray<Handle<game::interactions::ChoiceCaptionPart>> parts; // 00
};
RED4EXT_ASSERT_SIZE(ChoiceCaption, 0x10);
} // namespace game::interactions
using gameinteractionsChoiceCaption = game::interactions::ChoiceCaption;
using InteractionChoiceCaption = game::interactions::ChoiceCaption;
} // namespace RED4ext

// clang-format on
