#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/MountingSlotRole.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ICharacterConditionType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/MountConditionType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/MountVehicleOrigin.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/MountVehicleType.hpp>

namespace RED4ext
{
namespace quest { 
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
    CString playerVehicleName; // C0
    bool usePlayersVehicle; // E0
    bool anyParent; // E1
    bool anyChild; // E2
    bool enterAnimationFinished; // E3
    uint8_t unkE4[0xE8 - 0xE4]; // E4
};
RED4EXT_ASSERT_SIZE(CharacterMount_ConditionType, 0xE8);
} // namespace quest
} // namespace RED4ext
