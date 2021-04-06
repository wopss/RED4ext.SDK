#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/ent/Entity.hpp>

namespace RED4ext
{
namespace game { struct VehicleCommonCurveSet; }
namespace game { struct VehicleCurveSet; }
namespace vehicle { struct BikeCurveSet; }

namespace game { 
struct VehicleCurvesLibrary : ent::Entity
{
    static constexpr const char* NAME = "gameVehicleCurvesLibrary";
    static constexpr const char* ALIAS = NAME;

    DynArray<Ref<game::VehicleCurveSet>> curves; // 158
    DynArray<Ref<game::VehicleCommonCurveSet>> commonCurves; // 168
    DynArray<Ref<vehicle::BikeCurveSet>> bikeCurves; // 178
};
RED4EXT_ASSERT_SIZE(VehicleCurvesLibrary, 0x188);
} // namespace game
} // namespace RED4ext
