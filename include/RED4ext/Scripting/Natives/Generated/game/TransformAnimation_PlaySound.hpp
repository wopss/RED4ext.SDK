#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/TransformAnimationTrackItemImpl.hpp>

namespace RED4ext
{
namespace game
{
struct TransformAnimation_PlaySound : game::TransformAnimationTrackItemImpl
{
    static constexpr const char* NAME = "gameTransformAnimation_PlaySound";
    static constexpr const char* ALIAS = NAME;

    CName soundName; // 30
    bool unique; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
};
RED4EXT_ASSERT_SIZE(TransformAnimation_PlaySound, 0x40);
} // namespace game
using gameTransformAnimation_PlaySound = game::TransformAnimation_PlaySound;
} // namespace RED4ext

// clang-format on
