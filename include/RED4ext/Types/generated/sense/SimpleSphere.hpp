#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/Sphere.hpp>
#include <RED4ext/Types/generated/sense/IShape.hpp>

namespace RED4ext
{
namespace sense { 
struct SimpleSphere : sense::IShape
{
    static constexpr const char* NAME = "senseSimpleSphere";
    static constexpr const char* ALIAS = "SenseSphere";

    Sphere sphere; // 50
};
RED4EXT_ASSERT_SIZE(SimpleSphere, 0x60);
} // namespace sense
using SenseSphere = sense::SimpleSphere;
} // namespace RED4ext
