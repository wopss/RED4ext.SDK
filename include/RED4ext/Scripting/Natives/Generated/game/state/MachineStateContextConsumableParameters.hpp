#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/state/MachineConsumableParameterBool.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/state/MachineConsumableParameterCName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/state/MachineConsumableParameterDouble.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/state/MachineConsumableParameterFloat.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/state/MachineConsumableParameterIScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/state/MachineConsumableParameterInt.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/state/MachineConsumableParameterTweakDBID.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/state/MachineConsumableParameterVector.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/state/MachineConsumableParameterWeakIScriptable.hpp>

namespace RED4ext
{
namespace game::state { 
struct MachineStateContextConsumableParameters
{
    static constexpr const char* NAME = "gamestateMachineStateContextConsumableParameters";
    static constexpr const char* ALIAS = NAME;

    alignas(8) StaticArray<game::state::MachineConsumableParameterBool, 128> boolParameters; // 00
    alignas(8) StaticArray<game::state::MachineConsumableParameterInt, 128> intParameters; // 1008
    alignas(8) StaticArray<game::state::MachineConsumableParameterFloat, 128> floatParameters; // 2010
    alignas(8) StaticArray<game::state::MachineConsumableParameterDouble, 128> doubleParameters; // 3018
    alignas(16) StaticArray<game::state::MachineConsumableParameterVector, 128> vectorParameters; // 4020
    alignas(8) StaticArray<game::state::MachineConsumableParameterCName, 128> CNameParameters; // 6030
    alignas(8) StaticArray<game::state::MachineConsumableParameterIScriptable, 128> IScriptableParameters; // 7038
    alignas(8) StaticArray<game::state::MachineConsumableParameterWeakIScriptable, 128> weakIScriptableParameters; // 8440
    alignas(8) StaticArray<game::state::MachineConsumableParameterTweakDBID, 128> tweakDBIDParameters; // 9848
};
RED4EXT_ASSERT_SIZE(MachineStateContextConsumableParameters, 0xA850);
} // namespace game::state
} // namespace RED4ext
