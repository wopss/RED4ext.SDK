#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CallbackBase.hpp>

namespace RED4ext
{
namespace ink
{
struct InputDeviceIdCallback : ink::CallbackBase
{
    static constexpr const char* NAME = "inkInputDeviceIdCallback";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk28[0x38 - 0x28]; // 28
};
RED4EXT_ASSERT_SIZE(InputDeviceIdCallback, 0x38);
} // namespace ink
using inkInputDeviceIdCallback = ink::InputDeviceIdCallback;
} // namespace RED4ext

// clang-format on
