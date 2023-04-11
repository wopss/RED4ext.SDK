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
struct TrackedMappinControllerCustomData : game::ui::MappinControllerCustomData
{
    static constexpr const char* NAME = "gameuiTrackedMappinControllerCustomData";
    static constexpr const char* ALIAS = "TrackedMappinControllerCustomData";

};
RED4EXT_ASSERT_SIZE(TrackedMappinControllerCustomData, 0x40);
} // namespace game::ui
using gameuiTrackedMappinControllerCustomData = game::ui::TrackedMappinControllerCustomData;
using TrackedMappinControllerCustomData = game::ui::TrackedMappinControllerCustomData;
} // namespace RED4ext

// clang-format on
