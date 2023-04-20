#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/UserData.hpp>

namespace RED4ext
{
namespace ink { struct GameNotificationToken; }

namespace ink
{
struct GameNotificationData : ink::UserData
{
    static constexpr const char* NAME = "inkGameNotificationData";
    static constexpr const char* ALIAS = NAME;

    CName notificationName; // 40
    CName queueName; // 48
    CName requiredGameState; // 50
    bool isBlocking; // 58
    bool useCursor; // 59
    uint8_t unk5A[0x60 - 0x5A]; // 5A
    CName introAnimation; // 60
    WeakHandle<ink::GameNotificationToken> token; // 68
};
RED4EXT_ASSERT_SIZE(GameNotificationData, 0x78);
} // namespace ink
using inkGameNotificationData = ink::GameNotificationData;
} // namespace RED4ext

// clang-format on
