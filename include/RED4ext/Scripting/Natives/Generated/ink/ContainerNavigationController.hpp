#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/DiscreteNavigationController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/NavigationOverrideEntry.hpp>

namespace RED4ext
{
namespace ink { 
struct ContainerNavigationController : ink::DiscreteNavigationController
{
    static constexpr const char* NAME = "inkContainerNavigationController";
    static constexpr const char* ALIAS = NAME;

    DynArray<ink::NavigationOverrideEntry> overrideEntries; // C0
    bool useGlobalInput; // D0
    uint8_t unkD1[0xF8 - 0xD1]; // D1
};
RED4EXT_ASSERT_SIZE(ContainerNavigationController, 0xF8);
} // namespace ink
} // namespace RED4ext
