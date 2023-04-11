#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace AI::behavior
{
struct IDebugger : ISerializable
{
    static constexpr const char* NAME = "AIbehaviorIDebugger";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IDebugger, 0x30);
} // namespace AI::behavior
using AIbehaviorIDebugger = AI::behavior::IDebugger;
} // namespace RED4ext

// clang-format on
