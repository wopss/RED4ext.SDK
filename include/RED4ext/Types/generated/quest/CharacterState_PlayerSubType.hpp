#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/game/PSMLocomotionStates.hpp>
#include <RED4ext/Types/generated/game/PSMTakedown.hpp>
#include <RED4ext/Types/generated/game/PSMTimeDilation.hpp>
#include <RED4ext/Types/generated/game/PSMUpperBodyStates.hpp>
#include <RED4ext/Types/generated/game/PSMVehicle.hpp>
#include <RED4ext/Types/generated/game/PSMWeaponStates.hpp>
#include <RED4ext/Types/generated/quest/EComparisonTypeEquality.hpp>
#include <RED4ext/Types/generated/quest/ICharacterConditionSubType.hpp>

namespace RED4ext
{
namespace quest { 
struct CharacterState_PlayerSubType : quest::ICharacterConditionSubType
{
    static constexpr const char* NAME = "questCharacterState_PlayerSubType";
    static constexpr const char* ALIAS = NAME;

    quest::EComparisonTypeEquality locomotionComparisonType; // 30
    game::PSMLocomotionStates locomotionState; // 34
    quest::EComparisonTypeEquality upperBodyComparisonType; // 38
    game::PSMUpperBodyStates upperBodyState; // 3C
    quest::EComparisonTypeEquality weaponComparisonType; // 40
    game::PSMWeaponStates weaponState; // 44
    quest::EComparisonTypeEquality timeDilationComparisonType; // 48
    game::PSMTimeDilation timeDilationState; // 4C
    quest::EComparisonTypeEquality vehicleComparisonType; // 50
    game::PSMVehicle vehicleState; // 54
    quest::EComparisonTypeEquality takedownStateComparisonType; // 58
    game::PSMTakedown takedownState; // 5C
};
RED4EXT_ASSERT_SIZE(CharacterState_PlayerSubType, 0x60);
} // namespace quest
} // namespace RED4ext
