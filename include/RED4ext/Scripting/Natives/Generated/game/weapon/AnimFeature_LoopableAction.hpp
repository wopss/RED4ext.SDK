#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimFeature.hpp>

namespace RED4ext
{
namespace game::weapon
{
struct AnimFeature_LoopableAction : anim::AnimFeature
{
    static constexpr const char* NAME = "gameweaponAnimFeature_LoopableAction";
    static constexpr const char* ALIAS = "AnimFeature_LoopableAction";

    float loopDuration; // 40
    uint8_t numLoops; // 44
    bool isActive; // 45
    uint8_t unk46[0x48 - 0x46]; // 46
};
RED4EXT_ASSERT_SIZE(AnimFeature_LoopableAction, 0x48);
} // namespace game::weapon
using gameweaponAnimFeature_LoopableAction = game::weapon::AnimFeature_LoopableAction;
using AnimFeature_LoopableAction = game::weapon::AnimFeature_LoopableAction;
} // namespace RED4ext

// clang-format on
