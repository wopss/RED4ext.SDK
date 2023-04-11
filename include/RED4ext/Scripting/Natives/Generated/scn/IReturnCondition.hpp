#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace scn
{
struct IReturnCondition : ISerializable
{
    static constexpr const char* NAME = "scnIReturnCondition";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IReturnCondition, 0x30);
} // namespace scn
using scnIReturnCondition = scn::IReturnCondition;
} // namespace RED4ext

// clang-format on
