#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>

namespace RED4ext
{
struct Plane
{
    static constexpr const char* NAME = "Plane";
    static constexpr const char* ALIAS = NAME;

    Vector4 NormalDistance; // 00
};
RED4EXT_ASSERT_SIZE(Plane, 0x10);
} // namespace RED4ext
