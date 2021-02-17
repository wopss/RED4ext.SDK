#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/ink/ListController.hpp>

namespace RED4ext
{
namespace ink { 
struct RollingListController : ink::ListController
{
    static constexpr const char* NAME = "inkRollingListController";
    static constexpr const char* ALIAS = NAME;

    int32_t itemsToDisplay; // 118
    float convexity; // 11C
    float verticalCompression; // 120
    float scrollTime; // 124
};
RED4EXT_ASSERT_SIZE(RollingListController, 0x128);
} // namespace ink
} // namespace RED4ext
