#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ILoadingLogicController.hpp>

namespace RED4ext
{
namespace ink
{
struct DefaultLoadingScreenLogicController : ink::ILoadingLogicController
{
    static constexpr const char* NAME = "inkDefaultLoadingScreenLogicController";
    static constexpr const char* ALIAS = "DefaultLoadingScreenLogicController";

    uint8_t unk190[0x1A0 - 0x190]; // 190
};
RED4EXT_ASSERT_SIZE(DefaultLoadingScreenLogicController, 0x1A0);
} // namespace ink
using inkDefaultLoadingScreenLogicController = ink::DefaultLoadingScreenLogicController;
using DefaultLoadingScreenLogicController = ink::DefaultLoadingScreenLogicController;
} // namespace RED4ext

// clang-format on
