#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace ink
{
struct ILoadingLogicController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "inkILoadingLogicController";
    static constexpr const char* ALIAS = "ILoadingLogicController";

    uint8_t unk78[0x190 - 0x78]; // 78
};
RED4EXT_ASSERT_SIZE(ILoadingLogicController, 0x190);
} // namespace ink
using inkILoadingLogicController = ink::ILoadingLogicController;
using ILoadingLogicController = ink::ILoadingLogicController;
} // namespace RED4ext

// clang-format on
