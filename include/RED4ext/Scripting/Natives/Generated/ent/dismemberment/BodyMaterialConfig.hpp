#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/RagdollBodyPartE.hpp>

namespace RED4ext
{
namespace ent::dismemberment
{
struct BodyMaterialConfig
{
    static constexpr const char* NAME = "entdismembermentBodyMaterialConfig";
    static constexpr const char* ALIAS = NAME;

    physics::RagdollBodyPartE FleshBodyMask; // 00
    physics::RagdollBodyPartE CyberBodyMask; // 04
};
RED4EXT_ASSERT_SIZE(BodyMaterialConfig, 0x8);
} // namespace ent::dismemberment
using entdismembermentBodyMaterialConfig = ent::dismemberment::BodyMaterialConfig;
} // namespace RED4ext

// clang-format on
