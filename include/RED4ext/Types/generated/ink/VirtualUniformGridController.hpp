#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/ink/VirtualUniformListController.hpp>

namespace RED4ext
{
namespace ink { 
struct VirtualUniformGridController : ink::VirtualUniformListController
{
    static constexpr const char* NAME = "inkVirtualUniformGridController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk1A8[0x1B0 - 0x1A8]; // 1A8
};
RED4EXT_ASSERT_SIZE(VirtualUniformGridController, 0x1B0);
} // namespace ink
} // namespace RED4ext
