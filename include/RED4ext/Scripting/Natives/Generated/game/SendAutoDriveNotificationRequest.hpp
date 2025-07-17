#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ScriptableSystemRequest.hpp>

namespace RED4ext
{
namespace game
{
struct SendAutoDriveNotificationRequest : game::ScriptableSystemRequest
{
    static constexpr const char* NAME = "gameSendAutoDriveNotificationRequest";
    static constexpr const char* ALIAS = "SendAutoDriveNotificationRequest";

    CString locKey; // 48
    bool isDelamain; // 68
    uint8_t unk69[0x70 - 0x69]; // 69
};
RED4EXT_ASSERT_SIZE(SendAutoDriveNotificationRequest, 0x70);
} // namespace game
using gameSendAutoDriveNotificationRequest = game::SendAutoDriveNotificationRequest;
using SendAutoDriveNotificationRequest = game::SendAutoDriveNotificationRequest;
} // namespace RED4ext

// clang-format on
