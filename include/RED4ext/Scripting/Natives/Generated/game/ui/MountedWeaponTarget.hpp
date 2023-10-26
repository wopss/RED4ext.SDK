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
struct __declspec(align(0x10)) MountedWeaponTarget
{
    static constexpr const char* NAME = "gameuiMountedWeaponTarget";
    static constexpr const char* ALIAS = NAME;

    int32_t weaponIndex; // 00
    uint8_t unk04[0x10 - 0x4]; // 4
    Vector4 targetLocation; // 10
};
RED4EXT_ASSERT_SIZE(MountedWeaponTarget, 0x20);
} // namespace game::ui
using gameuiMountedWeaponTarget = game::ui::MountedWeaponTarget;
} // namespace RED4ext

// clang-format on
