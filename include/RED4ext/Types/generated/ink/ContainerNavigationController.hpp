#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/generated/ink/DiscreteNavigationController.hpp>
#include <RED4ext/Types/generated/ink/NavigationOverrideEntry.hpp>

namespace RED4ext
{
namespace ink { 
struct ContainerNavigationController : ink::DiscreteNavigationController
{
    static constexpr const char* NAME = "inkContainerNavigationController";
    static constexpr const char* ALIAS = NAME;

    DynArray<ink::NavigationOverrideEntry> overrideEntries; // B0
    bool useGlobalInput; // C0
    uint8_t unkC1[0xE8 - 0xC1]; // C1
};
RED4EXT_ASSERT_SIZE(ContainerNavigationController, 0xE8);
} // namespace ink
} // namespace RED4ext
