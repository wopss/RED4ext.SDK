#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/UserData.hpp>

namespace RED4ext
{
namespace ink { struct GameNotificationToken; }

namespace ink { 
struct GameNotificationData : ink::UserData
{
    static constexpr const char* NAME = "inkGameNotificationData";
    static constexpr const char* ALIAS = NAME;

    CName notificationName; // 40
    CName queueName; // 48
    bool isBlocking; // 50
    bool useCursor; // 51
    uint8_t unk52[0x58 - 0x52]; // 52
    CName introAnimation; // 58
    WeakHandle<ink::GameNotificationToken> token; // 60
};
RED4EXT_ASSERT_SIZE(GameNotificationData, 0x70);
} // namespace ink
} // namespace RED4ext
