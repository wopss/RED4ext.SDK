#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ScriptableSystemRequest.hpp>

namespace RED4ext
{
namespace quest
{
struct MinimizeCallRequest : game::ScriptableSystemRequest
{
    static constexpr const char* NAME = "questMinimizeCallRequest";
    static constexpr const char* ALIAS = NAME;

    bool minimized; // 48
    uint8_t unk49[0x50 - 0x49]; // 49
};
RED4EXT_ASSERT_SIZE(MinimizeCallRequest, 0x50);
} // namespace quest
using questMinimizeCallRequest = quest::MinimizeCallRequest;
} // namespace RED4ext

// clang-format on
