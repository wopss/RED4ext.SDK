#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace AI
{
struct ArgumentDefinition : ISerializable
{
    static constexpr const char* NAME = "AIArgumentDefinition";
    static constexpr const char* ALIAS = NAME;

    CName name; // 30
    bool isPersistent; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
    CName behaviorCallbackName; // 40
};
RED4EXT_ASSERT_SIZE(ArgumentDefinition, 0x48);
} // namespace AI
using AIArgumentDefinition = AI::ArgumentDefinition;
} // namespace RED4ext

// clang-format on
