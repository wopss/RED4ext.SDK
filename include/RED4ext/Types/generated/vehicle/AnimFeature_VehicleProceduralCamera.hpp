#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/Quaternion.hpp>
#include <RED4ext/Types/generated/Vector4.hpp>
#include <RED4ext/Types/generated/anim/AnimFeature.hpp>

namespace RED4ext
{
namespace vehicle { 
struct AnimFeature_VehicleProceduralCamera : anim::AnimFeature
{
    static constexpr const char* NAME = "vehicleAnimFeature_VehicleProceduralCamera";
    static constexpr const char* ALIAS = NAME;

    Vector4 cameraTranslationVS; // 40
    Quaternion cameraOrientationVS; // 50
};
RED4EXT_ASSERT_SIZE(AnimFeature_VehicleProceduralCamera, 0x60);
} // namespace vehicle
} // namespace RED4ext
