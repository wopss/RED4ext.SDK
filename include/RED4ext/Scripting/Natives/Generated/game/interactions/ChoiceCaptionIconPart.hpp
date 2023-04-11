#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/ChoiceCaptionPart.hpp>

namespace RED4ext
{
namespace game::data { struct ChoiceCaptionIconPart_Record; }

namespace game::interactions
{
struct ChoiceCaptionIconPart : game::interactions::ChoiceCaptionPart
{
    static constexpr const char* NAME = "gameinteractionsChoiceCaptionIconPart";
    static constexpr const char* ALIAS = "InteractionChoiceCaptionIconPart";

    WeakHandle<game::data::ChoiceCaptionIconPart_Record> iconRecord; // 40
};
RED4EXT_ASSERT_SIZE(ChoiceCaptionIconPart, 0x50);
} // namespace game::interactions
using gameinteractionsChoiceCaptionIconPart = game::interactions::ChoiceCaptionIconPart;
using InteractionChoiceCaptionIconPart = game::interactions::ChoiceCaptionIconPart;
} // namespace RED4ext

// clang-format on
