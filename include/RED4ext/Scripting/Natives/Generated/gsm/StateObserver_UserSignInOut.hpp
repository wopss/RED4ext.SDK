#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/gsm/IStateObserver.hpp>

namespace RED4ext
{
namespace gsm
{
struct StateObserver_UserSignInOut : gsm::IStateObserver
{
    static constexpr const char* NAME = "gsmStateObserver_UserSignInOut";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk08[0x10 - 0x8]; // 8
};
RED4EXT_ASSERT_SIZE(StateObserver_UserSignInOut, 0x10);
} // namespace gsm
using gsmStateObserver_UserSignInOut = gsm::StateObserver_UserSignInOut;
} // namespace RED4ext

// clang-format on
