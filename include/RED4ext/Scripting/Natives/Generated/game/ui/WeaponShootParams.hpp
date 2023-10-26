#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>

namespace RED4ext
{
namespace game::ui
{
struct __declspec(align(0x10)) WeaponShootParams
{
    static constexpr const char* NAME = "gameuiWeaponShootParams";
    static constexpr const char* ALIAS = NAME;

    Vector4 fromWorldPosition; // 00
    Vector4 forward; // 10
};
RED4EXT_ASSERT_SIZE(WeaponShootParams, 0x20);
} // namespace game::ui
using gameuiWeaponShootParams = game::ui::WeaponShootParams;
} // namespace RED4ext

// clang-format on
