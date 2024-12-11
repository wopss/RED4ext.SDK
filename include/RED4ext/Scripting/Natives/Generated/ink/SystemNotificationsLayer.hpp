#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/FullScreenLayer.hpp>

namespace RED4ext
{
namespace ink
{
struct SystemNotificationsLayer : ink::FullScreenLayer
{
    static constexpr const char* NAME = "inkSystemNotificationsLayer";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk150[0x640 - 0x150]; // 150
};
RED4EXT_ASSERT_SIZE(SystemNotificationsLayer, 0x640);
} // namespace ink
using inkSystemNotificationsLayer = ink::SystemNotificationsLayer;
} // namespace RED4ext

// clang-format on
