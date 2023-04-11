#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ICharacterConditionType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/MountVehicleOrigin.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/MountVehicleType.hpp>

namespace RED4ext
{
namespace quest { struct MountedObjectInfo; }

namespace quest
{
struct CharacterMountedTogether_ConditionType : quest::ICharacterConditionType
{
    static constexpr const char* NAME = "questCharacterMountedTogether_ConditionType";
    static constexpr const char* ALIAS = NAME;

    DynArray<Handle<quest::MountedObjectInfo>> characters; // 78
    uint8_t unk88[0x8C - 0x88]; // 88
    quest::MountVehicleType vehicleType; // 8C
    quest::MountVehicleOrigin vehicleOrigin; // 90
    uint8_t unk94[0x98 - 0x94]; // 94
};
RED4EXT_ASSERT_SIZE(CharacterMountedTogether_ConditionType, 0x98);
} // namespace quest
using questCharacterMountedTogether_ConditionType = quest::CharacterMountedTogether_ConditionType;
} // namespace RED4ext

// clang-format on
