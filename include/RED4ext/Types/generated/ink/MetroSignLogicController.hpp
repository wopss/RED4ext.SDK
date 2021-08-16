#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/generated/ink/CompoundWidgetReference.hpp>
#include <RED4ext/Types/generated/ink/IStreetNameSignLogicController.hpp>
#include <RED4ext/Types/generated/ink/TextWidgetReference.hpp>

namespace RED4ext
{
namespace ink { 
struct MetroSignLogicController : ink::IStreetNameSignLogicController
{
    static constexpr const char* NAME = "inkMetroSignLogicController";
    static constexpr const char* ALIAS = NAME;

    ink::TextWidgetReference stationName; // 68
    ink::TextWidgetReference subDistrictName; // 80
    ink::CompoundWidgetReference metroStationsContainer; // 98
    CName metroStationLibraryName; // B0
    CName metroStationTextWidgetName; // B8
};
RED4EXT_ASSERT_SIZE(MetroSignLogicController, 0xC0);
} // namespace ink
} // namespace RED4ext
