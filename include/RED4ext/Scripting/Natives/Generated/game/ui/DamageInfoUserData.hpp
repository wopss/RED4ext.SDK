#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game::ui
{
struct DamageInfoUserData : IScriptable
{
    static constexpr const char* NAME = "gameuiDamageInfoUserData";
    static constexpr const char* ALIAS = "DamageInfoUserData";

};
RED4EXT_ASSERT_SIZE(DamageInfoUserData, 0x40);
} // namespace game::ui
using gameuiDamageInfoUserData = game::ui::DamageInfoUserData;
using DamageInfoUserData = game::ui::DamageInfoUserData;
} // namespace RED4ext

// clang-format on
