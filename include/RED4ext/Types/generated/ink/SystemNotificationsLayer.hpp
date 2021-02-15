#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/ink/FullScreenLayer.hpp>

namespace RED4ext
{
namespace ink { 
struct SystemNotificationsLayer : ink::FullScreenLayer
{
    static constexpr const char* NAME = "inkSystemNotificationsLayer";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk150[0x500 - 0x150]; // 150
};
RED4EXT_ASSERT_SIZE(SystemNotificationsLayer, 0x500);
} // namespace ink
} // namespace RED4ext
