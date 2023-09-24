#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/DiscreteNavigationController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/EmptyCallback.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/VirtualCompoundControllerCallback.hpp>

namespace RED4ext
{
namespace ink
{
struct VirtualCompoundController : ink::DiscreteNavigationController
{
    static constexpr const char* NAME = "inkVirtualCompoundController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkC0[0xD0 - 0xC0]; // C0
    ink::VirtualCompoundControllerCallback ItemSelected; // D0
    ink::VirtualCompoundControllerCallback ItemActivated; // 108
    ink::EmptyCallback AllElementsSpawned; // 140
    uint8_t unk178[0x208 - 0x178]; // 178
};
RED4EXT_ASSERT_SIZE(VirtualCompoundController, 0x208);
} // namespace ink
using inkVirtualCompoundController = ink::VirtualCompoundController;
} // namespace RED4ext

// clang-format on
