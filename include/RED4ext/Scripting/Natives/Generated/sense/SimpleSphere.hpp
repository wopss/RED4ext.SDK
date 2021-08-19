#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Sphere.hpp>
#include <RED4ext/Scripting/Natives/Generated/sense/IShape.hpp>

namespace RED4ext
{
namespace sense { 
struct SimpleSphere : sense::IShape
{
    static constexpr const char* NAME = "senseSimpleSphere";
    static constexpr const char* ALIAS = NAME;

    Sphere sphere; // 50
};
RED4EXT_ASSERT_SIZE(SimpleSphere, 0x60);
} // namespace sense
} // namespace RED4ext
