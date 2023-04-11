#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CallbackListener.hpp>

namespace RED4ext
{
namespace ink
{
struct CallbackBase
{
    static constexpr const char* NAME = "inkCallbackBase";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x10 - 0x0]; // 0
    CName callbackName; // 10
    DynArray<ink::CallbackListener> listeners; // 18
};
RED4EXT_ASSERT_SIZE(CallbackBase, 0x28);
} // namespace ink
using inkCallbackBase = ink::CallbackBase;
} // namespace RED4ext

// clang-format on
