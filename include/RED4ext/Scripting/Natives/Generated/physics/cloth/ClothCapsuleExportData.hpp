#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/cloth/ExportedCapsule.hpp>

namespace RED4ext
{
namespace physics::cloth
{
struct ClothCapsuleExportData : ISerializable
{
    static constexpr const char* NAME = "physicsclothClothCapsuleExportData";
    static constexpr const char* ALIAS = NAME;

    DynArray<physics::cloth::ExportedCapsule> capsules; // 30
};
RED4EXT_ASSERT_SIZE(ClothCapsuleExportData, 0x40);
} // namespace physics::cloth
using physicsclothClothCapsuleExportData = physics::cloth::ClothCapsuleExportData;
} // namespace RED4ext

// clang-format on
