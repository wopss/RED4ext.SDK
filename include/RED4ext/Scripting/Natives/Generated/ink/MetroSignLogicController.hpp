#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CompoundWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/IStreetNameSignLogicController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/TextWidgetReference.hpp>

namespace RED4ext
{
namespace ink
{
struct MetroSignLogicController : ink::IStreetNameSignLogicController
{
    static constexpr const char* NAME = "inkMetroSignLogicController";
    static constexpr const char* ALIAS = NAME;

    ink::TextWidgetReference stationName; // 78
    ink::TextWidgetReference subDistrictName; // 90
    ink::CompoundWidgetReference metroStationsContainer; // A8
    CName metroStationLibraryName; // C0
    CName metroStationTextWidgetName; // C8
};
RED4EXT_ASSERT_SIZE(MetroSignLogicController, 0xD0);
} // namespace ink
using inkMetroSignLogicController = ink::MetroSignLogicController;
} // namespace RED4ext

// clang-format on
