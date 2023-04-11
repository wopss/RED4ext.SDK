#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/LanguageId.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
struct Bink;

namespace ink
{
struct LanguageSpecificVideoController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "inkLanguageSpecificVideoController";
    static constexpr const char* ALIAS = "LanguageSpecificVideoController";

    bool isLooped; // 78
    uint8_t unk79[0x80 - 0x79]; // 79
    RaRef<Bink> specificVideoForLanguage; // 80
    DynArray<ink::LanguageId> languages; // 88
    RaRef<Bink> fallbackVideo; // 98
};
RED4EXT_ASSERT_SIZE(LanguageSpecificVideoController, 0xA0);
} // namespace ink
using inkLanguageSpecificVideoController = ink::LanguageSpecificVideoController;
using LanguageSpecificVideoController = ink::LanguageSpecificVideoController;
} // namespace RED4ext

// clang-format on
