#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/camera/ISettingManager.hpp>

namespace RED4ext
{
namespace game::camera
{
struct SettingManager : game::camera::ISettingManager
{
    static constexpr const char* NAME = "gamecameraSettingManager";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0xA0 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(SettingManager, 0xA0);
} // namespace game::camera
using gamecameraSettingManager = game::camera::SettingManager;
} // namespace RED4ext

// clang-format on
