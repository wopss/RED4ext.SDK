#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace nav { 
struct SerializableSplineProgression
{
    static constexpr const char* NAME = "navSerializableSplineProgression";
    static constexpr const char* ALIAS = NAME;

    uint32_t sectionIdx; // 00
    float alpha; // 04
};
RED4EXT_ASSERT_SIZE(SerializableSplineProgression, 0x8);
} // namespace nav
} // namespace RED4ext
