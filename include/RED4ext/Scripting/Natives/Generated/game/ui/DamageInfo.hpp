#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/DamageType.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/HitType.hpp>

namespace RED4ext
{
namespace game { struct Object; }
namespace game::ui { struct DamageInfoUserData; }

namespace game::ui
{
struct __declspec(align(0x10)) DamageInfo
{
    static constexpr const char* NAME = "gameuiDamageInfo";
    static constexpr const char* ALIAS = "DamageInfo";

    Vector4 hitPosition; // 00
    float damageValue; // 10
    game::data::DamageType damageType; // 14
    game::ui::HitType hitType; // 18
    uint8_t unk1C[0x20 - 0x1C]; // 1C
    WeakHandle<game::Object> entityHit; // 20
    WeakHandle<game::Object> instigator; // 30
    Handle<game::ui::DamageInfoUserData> userData; // 40
};
RED4EXT_ASSERT_SIZE(DamageInfo, 0x50);
} // namespace game::ui
using gameuiDamageInfo = game::ui::DamageInfo;
using DamageInfo = game::ui::DamageInfo;
} // namespace RED4ext

// clang-format on
