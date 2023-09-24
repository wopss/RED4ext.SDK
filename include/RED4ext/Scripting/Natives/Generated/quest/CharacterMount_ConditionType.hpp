#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/MountingSlotRole.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/Affiliation.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ICharacterConditionType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/MountConditionType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/MountVehicleOrigin.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/MountVehicleType.hpp>

namespace RED4ext
{
namespace quest
{
struct CharacterMount_ConditionType : quest::ICharacterConditionType
{
    static constexpr const char* NAME = "questCharacterMount_ConditionType";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference parentRef; // 78
    bool parentIsPlayer; // B0
    quest::MountConditionType condition; // B1
    uint8_t unkB2[0xB4 - 0xB2]; // B2
    game::MountingSlotRole role; // B4
    quest::MountVehicleType vehicleType; // B8
    quest::MountVehicleOrigin vehicleOrigin; // BC
    game::data::Affiliation vehicleAfiliation; // C0
    uint8_t unkC4[0xC8 - 0xC4]; // C4
    CString playerVehicleName; // C8
    bool usePlayersVehicle; // E8
    bool anyParent; // E9
    bool anyChild; // EA
    bool enterAnimationFinished; // EB
    uint8_t unkEC[0xF0 - 0xEC]; // EC
};
RED4EXT_ASSERT_SIZE(CharacterMount_ConditionType, 0xF0);
} // namespace quest
using questCharacterMount_ConditionType = quest::CharacterMount_ConditionType;
} // namespace RED4ext

// clang-format on
