#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ListController.hpp>

namespace RED4ext
{
namespace ink
{
struct RollingListController : ink::ListController
{
    static constexpr const char* NAME = "inkRollingListController";
    static constexpr const char* ALIAS = NAME;

    int32_t itemsToDisplay; // 128
    float convexity; // 12C
    float verticalCompression; // 130
    float scrollTime; // 134
};
RED4EXT_ASSERT_SIZE(RollingListController, 0x138);
} // namespace ink
using inkRollingListController = ink::RollingListController;
} // namespace RED4ext

// clang-format on
