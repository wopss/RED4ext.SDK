#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>

namespace RED4ext
{
struct IScriptable;

namespace ink
{
struct CallbackListener
{
    static constexpr const char* NAME = "inkCallbackListener";
    static constexpr const char* ALIAS = NAME;

    WeakHandle<IScriptable> object; // 00
    CName functionName; // 10
    uint8_t unk18[0x28 - 0x18]; // 18
};
RED4EXT_ASSERT_SIZE(CallbackListener, 0x28);
} // namespace ink
using inkCallbackListener = ink::CallbackListener;
} // namespace RED4ext

// clang-format on
