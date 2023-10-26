#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/gsm/State_Session.hpp>

namespace RED4ext
{
namespace gsm
{
struct __declspec(align(0x10)) State_PreGameSession : gsm::State_Session
{
    static constexpr const char* NAME = "gsmState_PreGameSession";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk330[0x340 - 0x330]; // 330
};
RED4EXT_ASSERT_SIZE(State_PreGameSession, 0x340);
} // namespace gsm
using gsmState_PreGameSession = gsm::State_PreGameSession;
} // namespace RED4ext

// clang-format on
