#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/GameNotificationData.hpp>

namespace RED4ext
{
namespace ink
{
struct UpdateModsPopupData : ink::GameNotificationData
{
    static constexpr const char* NAME = "inkUpdateModsPopupData";
    static constexpr const char* ALIAS = "UpdateModsPopupData";

};
RED4EXT_ASSERT_SIZE(UpdateModsPopupData, 0x78);
} // namespace ink
using inkUpdateModsPopupData = ink::UpdateModsPopupData;
using UpdateModsPopupData = ink::UpdateModsPopupData;
} // namespace RED4ext

// clang-format on
