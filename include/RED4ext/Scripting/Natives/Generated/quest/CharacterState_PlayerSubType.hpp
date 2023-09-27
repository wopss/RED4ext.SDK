#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PSMLocomotionStates.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PSMRangedWeaponStates.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PSMSwimming.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PSMTakedown.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PSMTimeDilation.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PSMUpperBodyStates.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PSMVehicle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/EComparisonTypeEquality.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ICharacterConditionSubType.hpp>

namespace RED4ext
{
namespace quest
{
struct CharacterState_PlayerSubType : quest::ICharacterConditionSubType
{
    static constexpr const char* NAME = "questCharacterState_PlayerSubType";
    static constexpr const char* ALIAS = NAME;

    quest::EComparisonTypeEquality locomotionComparisonType; // 30
    game::PSMLocomotionStates locomotionState; // 34
    quest::EComparisonTypeEquality upperBodyComparisonType; // 38
    game::PSMUpperBodyStates upperBodyState; // 3C
    quest::EComparisonTypeEquality weaponComparisonType; // 40
    game::PSMRangedWeaponStates weaponState; // 44
    quest::EComparisonTypeEquality timeDilationComparisonType; // 48
    game::PSMTimeDilation timeDilationState; // 4C
    quest::EComparisonTypeEquality vehicleComparisonType; // 50
    game::PSMVehicle vehicleState; // 54
    quest::EComparisonTypeEquality takedownStateComparisonType; // 58
    game::PSMTakedown takedownState; // 5C
    quest::EComparisonTypeEquality swimmingStateComparisonType; // 60
    game::PSMSwimming swimmingState; // 64
};
RED4EXT_ASSERT_SIZE(CharacterState_PlayerSubType, 0x68);
} // namespace quest
using questCharacterState_PlayerSubType = quest::CharacterState_PlayerSubType;
} // namespace RED4ext

// clang-format on
