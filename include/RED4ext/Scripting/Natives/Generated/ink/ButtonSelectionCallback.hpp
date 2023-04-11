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
struct ButtonSelectionCallback : ink::CallbackBase
{
    static constexpr const char* NAME = "inkButtonSelectionCallback";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk28[0x38 - 0x28]; // 28
};
RED4EXT_ASSERT_SIZE(ButtonSelectionCallback, 0x38);
} // namespace ink
using inkButtonSelectionCallback = ink::ButtonSelectionCallback;
} // namespace RED4ext

// clang-format on
