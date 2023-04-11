#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/cp/ConveyorLine.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Object.hpp>

namespace RED4ext
{
namespace cp
{
struct Conveyor : game::Object
{
    static constexpr const char* NAME = "cpConveyor";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk240[0x2A8 - 0x240]; // 240
    DynArray<cp::ConveyorLine> lines; // 2A8
    CurveData<float> movementCurve; // 2B8
    CName audioParameterLineActive; // 2F0
    CName audioParameterLineCycle; // 2F8
    CName audioParameterLineSpeed; // 300
    float entityDistance; // 308
    float entitySpawnOffset; // 30C
    uint8_t unk310[0x320 - 0x310]; // 310
};
RED4EXT_ASSERT_SIZE(Conveyor, 0x320);
} // namespace cp
using cpConveyor = cp::Conveyor;
} // namespace RED4ext

// clang-format on
