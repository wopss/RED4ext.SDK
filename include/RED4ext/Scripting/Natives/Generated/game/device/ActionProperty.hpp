#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/device/ActionPropertyFlags.hpp>

namespace RED4ext
{
namespace game::device
{
struct ActionProperty : IScriptable
{
    static constexpr const char* NAME = "gamedeviceActionProperty";
    static constexpr const char* ALIAS = "DeviceActionProperty";

    CName name; // 40
    CName typeName; // 48
    Variant first; // 50
    Variant second; // 68
    Variant third; // 80
    game::device::ActionPropertyFlags flags; // 98
    uint8_t unk9C[0xA0 - 0x9C]; // 9C
};
RED4EXT_ASSERT_SIZE(ActionProperty, 0xA0);
} // namespace game::device
using gamedeviceActionProperty = game::device::ActionProperty;
using DeviceActionProperty = game::device::ActionProperty;
} // namespace RED4ext

// clang-format on
