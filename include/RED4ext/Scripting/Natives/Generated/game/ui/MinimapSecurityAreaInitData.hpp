#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/MappinControllerCustomData.hpp>

namespace RED4ext
{
namespace game::ui
{
struct MinimapSecurityAreaInitData : game::ui::MappinControllerCustomData
{
    static constexpr const char* NAME = "gameuiMinimapSecurityAreaInitData";
    static constexpr const char* ALIAS = "MinimapSecurityAreaInitData";

};
RED4EXT_ASSERT_SIZE(MinimapSecurityAreaInitData, 0x40);
} // namespace game::ui
using gameuiMinimapSecurityAreaInitData = game::ui::MinimapSecurityAreaInitData;
using MinimapSecurityAreaInitData = game::ui::MinimapSecurityAreaInitData;
} // namespace RED4ext

// clang-format on
