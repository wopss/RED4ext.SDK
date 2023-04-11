#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/gsm/IStateObserver.hpp>

namespace RED4ext
{
namespace gsm::game
{
struct StateObserver_FunctionalTests : gsm::IStateObserver
{
    static constexpr const char* NAME = "gsmgameStateObserver_FunctionalTests";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk08[0x30 - 0x8]; // 8
};
RED4EXT_ASSERT_SIZE(StateObserver_FunctionalTests, 0x30);
} // namespace gsm::game
using gsmgameStateObserver_FunctionalTests = gsm::game::StateObserver_FunctionalTests;
} // namespace RED4ext

// clang-format on
