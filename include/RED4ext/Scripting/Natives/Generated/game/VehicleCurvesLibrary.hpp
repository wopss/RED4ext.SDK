#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/Entity.hpp>

namespace RED4ext
{
namespace game { struct VehicleCommonCurveSet; }
namespace game { struct VehicleCurveSet; }
namespace vehicle { struct BikeCurveSet; }

namespace game
{
struct VehicleCurvesLibrary : ent::Entity
{
    static constexpr const char* NAME = "gameVehicleCurvesLibrary";
    static constexpr const char* ALIAS = NAME;

    DynArray<Ref<game::VehicleCurveSet>> curves; // 160
    DynArray<Ref<game::VehicleCommonCurveSet>> commonCurves; // 170
    DynArray<Ref<vehicle::BikeCurveSet>> bikeCurves; // 180
};
RED4EXT_ASSERT_SIZE(VehicleCurvesLibrary, 0x190);
} // namespace game
using gameVehicleCurvesLibrary = game::VehicleCurvesLibrary;
} // namespace RED4ext

// clang-format on
