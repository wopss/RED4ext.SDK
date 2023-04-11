#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/ChoiceCaptionPart.hpp>

namespace RED4ext
{
namespace game::interactions
{
struct ChoiceCaptionStringPart : game::interactions::ChoiceCaptionPart
{
    static constexpr const char* NAME = "gameinteractionsChoiceCaptionStringPart";
    static constexpr const char* ALIAS = "InteractionChoiceCaptionStringPart";

    uint8_t unk40[0x48 - 0x40]; // 40
    CString content; // 48
};
RED4EXT_ASSERT_SIZE(ChoiceCaptionStringPart, 0x68);
} // namespace game::interactions
using gameinteractionsChoiceCaptionStringPart = game::interactions::ChoiceCaptionStringPart;
using InteractionChoiceCaptionStringPart = game::interactions::ChoiceCaptionStringPart;
} // namespace RED4ext

// clang-format on
