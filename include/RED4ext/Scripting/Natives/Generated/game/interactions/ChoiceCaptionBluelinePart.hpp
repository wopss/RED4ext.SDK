#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/ChoiceCaptionPart.hpp>

namespace RED4ext
{
namespace game::interactions::vis { struct BluelineDescription; }

namespace game::interactions
{
struct ChoiceCaptionBluelinePart : game::interactions::ChoiceCaptionPart
{
    static constexpr const char* NAME = "gameinteractionsChoiceCaptionBluelinePart";
    static constexpr const char* ALIAS = "InteractionChoiceCaptionBluelinePart";

    Handle<game::interactions::vis::BluelineDescription> blueline; // 40
};
RED4EXT_ASSERT_SIZE(ChoiceCaptionBluelinePart, 0x50);
} // namespace game::interactions
using gameinteractionsChoiceCaptionBluelinePart = game::interactions::ChoiceCaptionBluelinePart;
using InteractionChoiceCaptionBluelinePart = game::interactions::ChoiceCaptionBluelinePart;
} // namespace RED4ext

// clang-format on
