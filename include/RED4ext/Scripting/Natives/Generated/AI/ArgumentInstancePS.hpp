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
struct ArgumentInstancePS : ISerializable
{
    static constexpr const char* NAME = "AIArgumentInstancePS";
    static constexpr const char* ALIAS = NAME;

    CName name; // 30
};
RED4EXT_ASSERT_SIZE(ArgumentInstancePS, 0x38);
} // namespace AI
using AIArgumentInstancePS = AI::ArgumentInstancePS;
} // namespace RED4ext

// clang-format on
