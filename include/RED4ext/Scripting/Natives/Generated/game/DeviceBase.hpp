#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Object.hpp>

namespace RED4ext
{
namespace game
{
struct DeviceBase : game::Object
{
    static constexpr const char* NAME = "gameDeviceBase";
    static constexpr const char* ALIAS = "DeviceBase";

    uint8_t unk240[0x245 - 0x240]; // 240
    bool isLogicReady; // 245
    uint8_t unk246[0x248 - 0x246]; // 246
};
RED4EXT_ASSERT_SIZE(DeviceBase, 0x248);
} // namespace game
using gameDeviceBase = game::DeviceBase;
using DeviceBase = game::DeviceBase;
} // namespace RED4ext

// clang-format on
