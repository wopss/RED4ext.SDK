#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/Transform.hpp>

namespace RED4ext
{
namespace game
{
struct __declspec(align(0x10)) AnimationTransforms
{
    static constexpr const char* NAME = "gameAnimationTransforms";
    static constexpr const char* ALIAS = NAME;

    DynArray<Transform> extractedMotion; // 00
    Transform gatePosition; // 10
    Transform boneOffset; // 30
    uint64_t animsetHash; // 50
    uint8_t unk58[0x60 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(AnimationTransforms, 0x60);
} // namespace game
using gameAnimationTransforms = game::AnimationTransforms;
} // namespace RED4ext

// clang-format on
