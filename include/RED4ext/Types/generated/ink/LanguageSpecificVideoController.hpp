#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/ink/LanguageId.hpp>
#include <RED4ext/Types/generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
struct Bink;

namespace ink { 
struct LanguageSpecificVideoController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "inkLanguageSpecificVideoController";
    static constexpr const char* ALIAS = "LanguageSpecificVideoController";

    bool isLooped; // 68
    uint8_t unk69[0x70 - 0x69]; // 69
    RaRef<Bink> specificVideoForLanguage; // 70
    DynArray<ink::LanguageId> languages; // 78
    RaRef<Bink> fallbackVideo; // 88
};
RED4EXT_ASSERT_SIZE(LanguageSpecificVideoController, 0x90);
} // namespace ink
using LanguageSpecificVideoController = ink::LanguageSpecificVideoController;
} // namespace RED4ext
