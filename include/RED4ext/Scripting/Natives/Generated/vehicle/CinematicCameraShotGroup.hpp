#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/CinematicCameraShot.hpp>

namespace RED4ext
{
namespace vehicle { struct CinematicCameraShotStartCondition; }

namespace vehicle
{
struct CinematicCameraShotGroup : IScriptable
{
    static constexpr const char* NAME = "vehicleCinematicCameraShotGroup";
    static constexpr const char* ALIAS = NAME;

    CString name; // 40
    DynArray<vehicle::CinematicCameraShot> shots; // 60
    DynArray<Handle<vehicle::CinematicCameraShotStartCondition>> conditions; // 70
};
RED4EXT_ASSERT_SIZE(CinematicCameraShotGroup, 0x80);
} // namespace vehicle
using vehicleCinematicCameraShotGroup = vehicle::CinematicCameraShotGroup;
} // namespace RED4ext

// clang-format on
