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
struct StateObserver_SessionAutomation : gsm::IStateObserver
{
    static constexpr const char* NAME = "gsmStateObserver_SessionAutomation";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk08[0xA0 - 0x8]; // 8
};
RED4EXT_ASSERT_SIZE(StateObserver_SessionAutomation, 0xA0);
} // namespace gsm
using gsmStateObserver_SessionAutomation = gsm::StateObserver_SessionAutomation;
} // namespace RED4ext

// clang-format on
