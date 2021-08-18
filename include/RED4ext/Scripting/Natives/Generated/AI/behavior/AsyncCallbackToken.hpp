#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace AI::behavior { 
struct AsyncCallbackToken
{
    static constexpr const char* NAME = "AIbehaviorAsyncCallbackToken";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x20 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(AsyncCallbackToken, 0x20);
} // namespace AI::behavior
} // namespace RED4ext
