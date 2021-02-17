#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/EulerAngles.hpp>
#include <RED4ext/Types/generated/Vector3.hpp>

namespace RED4ext
{
namespace game { 
struct CameraLocation
{
    static constexpr const char* NAME = "gameCameraLocation";
    static constexpr const char* ALIAS = NAME;

    Vector3 position; // 00
    EulerAngles rotation; // 0C
};
RED4EXT_ASSERT_SIZE(CameraLocation, 0x18);
} // namespace game
} // namespace RED4ext
