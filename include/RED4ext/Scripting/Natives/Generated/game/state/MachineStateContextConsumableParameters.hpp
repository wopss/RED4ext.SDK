#pragma once

// clang-format off

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
namespace game::state
{
struct __declspec(align(0x10)) MachineStateContextConsumableParameters
{
    static constexpr const char* NAME = "gamestateMachineStateContextConsumableParameters";
    static constexpr const char* ALIAS = NAME;

#pragma warning(suppress : 4324)
    alignas(8) StaticArray<game::state::MachineConsumableParameterBool, 128> boolParameters; // 00
#pragma warning(suppress : 4324)
    alignas(8) StaticArray<game::state::MachineConsumableParameterInt, 128> intParameters; // 1008
#pragma warning(suppress : 4324)
    alignas(8) StaticArray<game::state::MachineConsumableParameterFloat, 128> floatParameters; // 2010
#pragma warning(suppress : 4324)
    alignas(8) StaticArray<game::state::MachineConsumableParameterDouble, 128> doubleParameters; // 3018
#pragma warning(suppress : 4324)
    alignas(16) StaticArray<game::state::MachineConsumableParameterVector, 128> vectorParameters; // 4020
#pragma warning(suppress : 4324)
    alignas(8) StaticArray<game::state::MachineConsumableParameterCName, 128> CNameParameters; // 6030
#pragma warning(suppress : 4324)
    alignas(8) StaticArray<game::state::MachineConsumableParameterIScriptable, 128> IScriptableParameters; // 7038
#pragma warning(suppress : 4324)
    alignas(8) StaticArray<game::state::MachineConsumableParameterWeakIScriptable, 128> weakIScriptableParameters; // 8440
#pragma warning(suppress : 4324)
    alignas(8) StaticArray<game::state::MachineConsumableParameterTweakDBID, 128> tweakDBIDParameters; // 9848
};
RED4EXT_ASSERT_SIZE(MachineStateContextConsumableParameters, 0xA850);
} // namespace game::state
using gamestateMachineStateContextConsumableParameters = game::state::MachineStateContextConsumableParameters;
} // namespace RED4ext

// clang-format on
