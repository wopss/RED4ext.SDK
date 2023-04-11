#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/IStreetNameSignLogicController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/TextWidgetReference.hpp>

namespace RED4ext
{
namespace ink
{
struct StreetNameSignLogicController : ink::IStreetNameSignLogicController
{
    static constexpr const char* NAME = "inkStreetNameSignLogicController";
    static constexpr const char* ALIAS = NAME;

    ink::TextWidgetReference streetName; // 78
    ink::TextWidgetReference districtName; // 90
    ink::TextWidgetReference subdistrictName; // A8
};
RED4EXT_ASSERT_SIZE(StreetNameSignLogicController, 0xC0);
} // namespace ink
using inkStreetNameSignLogicController = ink::StreetNameSignLogicController;
} // namespace RED4ext

// clang-format on
