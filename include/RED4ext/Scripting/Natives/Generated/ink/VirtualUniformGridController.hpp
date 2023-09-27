#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/VirtualUniformListController.hpp>

namespace RED4ext
{
namespace ink
{
struct VirtualUniformGridController : ink::VirtualUniformListController
{
    static constexpr const char* NAME = "inkVirtualUniformGridController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk230[0x238 - 0x230]; // 230
};
RED4EXT_ASSERT_SIZE(VirtualUniformGridController, 0x238);
} // namespace ink
using inkVirtualUniformGridController = ink::VirtualUniformGridController;
} // namespace RED4ext

// clang-format on
