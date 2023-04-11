#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/IconResult.hpp>

namespace RED4ext
{
namespace ink { struct ImageWidget; }

namespace ink
{
struct CallbackData : IScriptable
{
    static constexpr const char* NAME = "inkCallbackData";
    static constexpr const char* ALIAS = "iconAtlasCallbackData";

    ink::IconResult loadResult; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
    WeakHandle<ink::ImageWidget> targetWidget; // 48
    CString errorMsg; // 58
    TweakDBID iconSrc; // 78
};
RED4EXT_ASSERT_SIZE(CallbackData, 0x80);
} // namespace ink
using inkCallbackData = ink::CallbackData;
using iconAtlasCallbackData = ink::CallbackData;
} // namespace RED4ext

// clang-format on
