#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/UserData.hpp>

namespace RED4ext
{
namespace ink
{
struct HoldControllerActionData : ink::UserData
{
    static constexpr const char* NAME = "inkHoldControllerActionData";
    static constexpr const char* ALIAS = NAME;

    CName actionName; // 40
};
RED4EXT_ASSERT_SIZE(HoldControllerActionData, 0x48);
} // namespace ink
using inkHoldControllerActionData = ink::HoldControllerActionData;
} // namespace RED4ext

// clang-format on
