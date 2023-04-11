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
struct IInterruptCondition : ISerializable
{
    static constexpr const char* NAME = "scnIInterruptCondition";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IInterruptCondition, 0x30);
} // namespace scn
using scnIInterruptCondition = scn::IInterruptCondition;
} // namespace RED4ext

// clang-format on
