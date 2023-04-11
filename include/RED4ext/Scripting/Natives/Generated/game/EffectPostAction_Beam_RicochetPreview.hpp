#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectPostAction.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectPostAction_Beam_RicochetPreviewPreviewEffect.hpp>

namespace RED4ext
{
namespace game
{
struct EffectPostAction_Beam_RicochetPreview : game::EffectPostAction
{
    static constexpr const char* NAME = "gameEffectPostAction_Beam_RicochetPreview";
    static constexpr const char* ALIAS = NAME;

    game::EffectPostAction_Beam_RicochetPreviewPreviewEffect ricocheted; // 40
    game::EffectPostAction_Beam_RicochetPreviewPreviewEffect fromMuzzle; // 68
};
RED4EXT_ASSERT_SIZE(EffectPostAction_Beam_RicochetPreview, 0x90);
} // namespace game
using gameEffectPostAction_Beam_RicochetPreview = game::EffectPostAction_Beam_RicochetPreview;
} // namespace RED4ext

// clang-format on
