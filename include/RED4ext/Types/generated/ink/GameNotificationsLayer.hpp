#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/ink/FullScreenLayer.hpp>

namespace RED4ext
{
namespace ink { 
struct GameNotificationsLayer : ink::FullScreenLayer
{
    static constexpr const char* NAME = "inkGameNotificationsLayer";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk148[0x1A0 - 0x148]; // 148
};
RED4EXT_ASSERT_SIZE(GameNotificationsLayer, 0x1A0);
} // namespace ink
} // namespace RED4ext
