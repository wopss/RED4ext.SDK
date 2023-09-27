#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/DiscreteNavigationController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/NavigationOverrideEntry.hpp>

namespace RED4ext
{
namespace ink
{
struct ContainerNavigationController : ink::DiscreteNavigationController
{
    static constexpr const char* NAME = "inkContainerNavigationController";
    static constexpr const char* ALIAS = NAME;

    DynArray<ink::NavigationOverrideEntry> overrideEntries; // C0
    bool useGlobalInput; // D0
    uint8_t unkD1[0x130 - 0xD1]; // D1
};
RED4EXT_ASSERT_SIZE(ContainerNavigationController, 0x130);
} // namespace ink
using inkContainerNavigationController = ink::ContainerNavigationController;
} // namespace RED4ext

// clang-format on
