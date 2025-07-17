#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace vehicle
{
struct ForceBrakesCallbackListener : IScriptable
{
    static constexpr const char* NAME = "vehicleForceBrakesCallbackListener";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(ForceBrakesCallbackListener, 0x40);
} // namespace vehicle
using vehicleForceBrakesCallbackListener = vehicle::ForceBrakesCallbackListener;
} // namespace RED4ext

// clang-format on
