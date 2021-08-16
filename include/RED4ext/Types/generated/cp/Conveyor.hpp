#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
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

    uint8_t unk230[0x298 - 0x230]; // 230
    DynArray<cp::ConveyorLine> lines; // 298
    CurveData<float> movementCurve; // 2A8
    CName audioParameterLineActive; // 2E0
    CName audioParameterLineCycle; // 2E8
    CName audioParameterLineSpeed; // 2F0
    float entityDistance; // 2F8
    float entitySpawnOffset; // 2FC
    uint8_t unk300[0x310 - 0x300]; // 300
};
RED4EXT_ASSERT_SIZE(Conveyor, 0x310);
} // namespace cp
} // namespace RED4ext
