#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>

namespace RED4ext
{
namespace physics::cloth
{
struct ExportedCapsule
{
    static constexpr const char* NAME = "physicsclothExportedCapsule";
    static constexpr const char* ALIAS = NAME;

    Vector3 p0; // 00
    Vector3 p1; // 0C
    float r0; // 18
    float r1; // 1C
    CName boneName; // 20
};
RED4EXT_ASSERT_SIZE(ExportedCapsule, 0x28);
} // namespace physics::cloth
using physicsclothExportedCapsule = physics::cloth::ExportedCapsule;
} // namespace RED4ext

// clang-format on
