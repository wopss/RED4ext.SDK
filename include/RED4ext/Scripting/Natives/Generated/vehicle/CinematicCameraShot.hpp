#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace vehicle { struct CinematicCameraShotEffect; }
namespace vehicle { struct CinematicCameraShotRoot; }
namespace vehicle { struct CinematicCameraShotStopCondition; }

namespace vehicle
{
struct __declspec(align(0x10)) CinematicCameraShot : IScriptable
{
    static constexpr const char* NAME = "vehicleCinematicCameraShot";
    static constexpr const char* ALIAS = NAME;

    CString name; // 40
    bool enabled; // 60
    uint8_t unk61[0x64 - 0x61]; // 61
    int32_t probability; // 64
    float duration; // 68
    bool scaleForVehicle; // 6C
    uint8_t unk6D[0x70 - 0x6D]; // 6D
    Handle<vehicle::CinematicCameraShotRoot> root; // 70
    DynArray<Handle<vehicle::CinematicCameraShotEffect>> effects; // 80
    DynArray<Handle<vehicle::CinematicCameraShotStopCondition>> stopConditions; // 90
};
RED4EXT_ASSERT_SIZE(CinematicCameraShot, 0xA0);
} // namespace vehicle
using vehicleCinematicCameraShot = vehicle::CinematicCameraShot;
} // namespace RED4ext

// clang-format on
