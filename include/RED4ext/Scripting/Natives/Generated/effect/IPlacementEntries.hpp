#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace effect
{
struct IPlacementEntries : ISerializable
{
    static constexpr const char* NAME = "effectIPlacementEntries";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IPlacementEntries, 0x30);
} // namespace effect
using effectIPlacementEntries = effect::IPlacementEntries;
} // namespace RED4ext

// clang-format on
