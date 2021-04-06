#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/cp/ConveyorLine.hpp>
#include <RED4ext/Types/generated/game/Object.hpp>

namespace RED4ext
{
namespace cp { 
struct Conveyor : game::Object
{
    static constexpr const char* NAME = "cpConveyor";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk228[0x290 - 0x228]; // 228
    DynArray<cp::ConveyorLine> lines; // 290
    CurveData<float> movementCurve; // 2A0
    CName audioParameterLineActive; // 2D8
    CName audioParameterLineCycle; // 2E0
    CName audioParameterLineSpeed; // 2E8
    float entityDistance; // 2F0
    float entitySpawnOffset; // 2F4
    uint8_t unk2F8[0x308 - 0x2F8]; // 2F8
};
RED4EXT_ASSERT_SIZE(Conveyor, 0x308);
} // namespace cp
} // namespace RED4ext
