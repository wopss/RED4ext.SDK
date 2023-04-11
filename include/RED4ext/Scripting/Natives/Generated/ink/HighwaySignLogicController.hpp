#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/IStreetNameSignLogicController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ImageWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/TextWidgetReference.hpp>

namespace RED4ext
{
namespace ink
{
struct HighwaySignLogicController : ink::IStreetNameSignLogicController
{
    static constexpr const char* NAME = "inkHighwaySignLogicController";
    static constexpr const char* ALIAS = NAME;

    ink::TextWidgetReference districtName; // 78
    ink::TextWidgetReference subDistrictName; // 90
    ink::ImageWidgetReference metroStationIconLeft; // A8
    ink::ImageWidgetReference metroStationIconRight; // C0
};
RED4EXT_ASSERT_SIZE(HighwaySignLogicController, 0xD8);
} // namespace ink
using inkHighwaySignLogicController = ink::HighwaySignLogicController;
} // namespace RED4ext

// clang-format on
