#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/Color.hpp>

namespace RED4ext
{
namespace rend
{
struct GradientEntry : ISerializable
{
    static constexpr const char* NAME = "rendGradientEntry";
    static constexpr const char* ALIAS = NAME;

    float value; // 30
    Color color; // 34
};
RED4EXT_ASSERT_SIZE(GradientEntry, 0x38);
} // namespace rend
using rendGradientEntry = rend::GradientEntry;
} // namespace RED4ext

// clang-format on
