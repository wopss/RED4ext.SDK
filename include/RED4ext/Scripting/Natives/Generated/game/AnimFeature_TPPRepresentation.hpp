#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimFeature.hpp>

namespace RED4ext
{
namespace game
{
struct AnimFeature_TPPRepresentation : anim::AnimFeature
{
    static constexpr const char* NAME = "gameAnimFeature_TPPRepresentation";
    static constexpr const char* ALIAS = NAME;

    bool IsActive; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
};
RED4EXT_ASSERT_SIZE(AnimFeature_TPPRepresentation, 0x48);
} // namespace game
using gameAnimFeature_TPPRepresentation = game::AnimFeature_TPPRepresentation;
} // namespace RED4ext

// clang-format on
