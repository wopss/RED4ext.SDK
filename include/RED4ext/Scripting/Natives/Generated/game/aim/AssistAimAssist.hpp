#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game::aim
{
struct __declspec(align(0x10)) AssistAimAssist
{
    static constexpr const char* NAME = "gameaimAssistAimAssist";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0xD30 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(AssistAimAssist, 0xD30);
} // namespace game::aim
using gameaimAssistAimAssist = game::aim::AssistAimAssist;
} // namespace RED4ext

// clang-format on
