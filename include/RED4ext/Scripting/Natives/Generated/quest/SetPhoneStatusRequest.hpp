#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ScriptableSystemRequest.hpp>

namespace RED4ext
{
namespace quest
{
struct SetPhoneStatusRequest : game::ScriptableSystemRequest
{
    static constexpr const char* NAME = "questSetPhoneStatusRequest";
    static constexpr const char* ALIAS = NAME;

    CName status; // 48
};
RED4EXT_ASSERT_SIZE(SetPhoneStatusRequest, 0x50);
} // namespace quest
using questSetPhoneStatusRequest = quest::SetPhoneStatusRequest;
} // namespace RED4ext

// clang-format on
