#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/ink/IStreetNameSignLogicController.hpp>
#include <RED4ext/Types/generated/ink/ImageWidgetReference.hpp>
#include <RED4ext/Types/generated/ink/TextWidgetReference.hpp>

namespace RED4ext
{
namespace ink { 
struct HighwaySignLogicController : ink::IStreetNameSignLogicController
{
    static constexpr const char* NAME = "inkHighwaySignLogicController";
    static constexpr const char* ALIAS = NAME;

    ink::TextWidgetReference districtName; // 68
    ink::TextWidgetReference subDistrictName; // 80
    ink::ImageWidgetReference metroStationIconLeft; // 98
    ink::ImageWidgetReference metroStationIconRight; // B0
};
RED4EXT_ASSERT_SIZE(HighwaySignLogicController, 0xC8);
} // namespace ink
} // namespace RED4ext
