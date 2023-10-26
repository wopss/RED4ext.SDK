#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimFeature.hpp>

namespace RED4ext
{
namespace anim
{
struct __declspec(align(0x10)) AnimFeature_WeaponUser : anim::AnimFeature
{
    static constexpr const char* NAME = "animAnimFeature_WeaponUser";
    static constexpr const char* ALIAS = NAME;

    Vector4 ikLeftHandLocalPosition; // 40
    Vector4 ikRightHandLocalPosition; // 50
};
RED4EXT_ASSERT_SIZE(AnimFeature_WeaponUser, 0x60);
} // namespace anim
using animAnimFeature_WeaponUser = anim::AnimFeature_WeaponUser;
} // namespace RED4ext

// clang-format on
