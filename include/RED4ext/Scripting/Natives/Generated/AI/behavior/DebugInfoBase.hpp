#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace AI::behavior
{
struct DebugInfoBase : ISerializable
{
    static constexpr const char* NAME = "AIbehaviorDebugInfoBase";
    static constexpr const char* ALIAS = NAME;

    CString caption; // 30
};
RED4EXT_ASSERT_SIZE(DebugInfoBase, 0x50);
} // namespace AI::behavior
using AIbehaviorDebugInfoBase = AI::behavior::DebugInfoBase;
} // namespace RED4ext

// clang-format on
