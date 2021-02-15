#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/ink/DiscreteNavigationController.hpp>
#include <RED4ext/Types/generated/ink/VirtualCompoundControllerCallback.hpp>

namespace RED4ext
{
namespace ink { 
struct VirtualCompoundController : ink::DiscreteNavigationController
{
    static constexpr const char* NAME = "inkVirtualCompoundController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkB0[0xC0 - 0xB0]; // B0
    ink::VirtualCompoundControllerCallback ItemSelected; // C0
    ink::VirtualCompoundControllerCallback ItemActivated; // F8
    uint8_t unk130[0x180 - 0x130]; // 130
};
RED4EXT_ASSERT_SIZE(VirtualCompoundController, 0x180);
} // namespace ink
} // namespace RED4ext
