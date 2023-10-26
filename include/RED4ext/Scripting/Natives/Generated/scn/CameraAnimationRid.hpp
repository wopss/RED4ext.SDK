#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/CameraAnimationLOD.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/RidTag.hpp>

namespace RED4ext
{
namespace anim { struct IAnimationBuffer; }

namespace scn
{
struct __declspec(align(0x10)) CameraAnimationRid
{
    static constexpr const char* NAME = "scnCameraAnimationRid";
    static constexpr const char* ALIAS = NAME;

    scn::RidTag tag; // 00
    Handle<anim::IAnimationBuffer> animation; // 10
    scn::CameraAnimationLOD cameraAnimationLOD; // 20
};
RED4EXT_ASSERT_SIZE(CameraAnimationRid, 0x130);
} // namespace scn
using scnCameraAnimationRid = scn::CameraAnimationRid;
} // namespace RED4ext

// clang-format on
