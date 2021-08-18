#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/IStreetNameSignLogicController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/TextWidgetReference.hpp>

namespace RED4ext
{
namespace ink { 
struct StreetNameSignLogicController : ink::IStreetNameSignLogicController
{
    static constexpr const char* NAME = "inkStreetNameSignLogicController";
    static constexpr const char* ALIAS = NAME;

    ink::TextWidgetReference streetName; // 68
    ink::TextWidgetReference districtName; // 80
    ink::TextWidgetReference subdistrictName; // 98
};
RED4EXT_ASSERT_SIZE(StreetNameSignLogicController, 0xB0);
} // namespace ink
} // namespace RED4ext
