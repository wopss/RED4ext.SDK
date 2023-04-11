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
struct StateObserver_SessionChanged : gsm::IStateObserver
{
    static constexpr const char* NAME = "gsmStateObserver_SessionChanged";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(StateObserver_SessionChanged, 0x8);
} // namespace gsm
using gsmStateObserver_SessionChanged = gsm::StateObserver_SessionChanged;
} // namespace RED4ext

// clang-format on
