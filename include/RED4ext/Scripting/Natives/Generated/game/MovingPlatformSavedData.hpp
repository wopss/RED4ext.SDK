#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>

namespace RED4ext
{
namespace game { struct IMovingPlatformMovement; }

namespace game
{
struct __declspec(align(0x10)) MovingPlatformSavedData
{
    static constexpr const char* NAME = "gameMovingPlatformSavedData";
    static constexpr const char* ALIAS = NAME;

    Vector4 currentLocalPosition; // 00
    Handle<game::IMovingPlatformMovement> movement; // 10
    CName destinationName; // 20
    int32_t destinationData; // 28
    float time; // 2C
    float maxTime; // 30
    uint32_t mountedPlayerEntityID; // 34
    bool isPaused; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
};
RED4EXT_ASSERT_SIZE(MovingPlatformSavedData, 0x40);
} // namespace game
using gameMovingPlatformSavedData = game::MovingPlatformSavedData;
} // namespace RED4ext

// clang-format on
