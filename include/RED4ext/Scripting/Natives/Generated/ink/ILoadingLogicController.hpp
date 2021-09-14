#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace ink { 
struct ILoadingLogicController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "inkILoadingLogicController";
    static constexpr const char* ALIAS = "ILoadingLogicController";

    uint8_t unk68[0x180 - 0x68]; // 68
};
RED4EXT_ASSERT_SIZE(ILoadingLogicController, 0x180);
} // namespace ink
using ILoadingLogicController = ink::ILoadingLogicController;
} // namespace RED4ext
