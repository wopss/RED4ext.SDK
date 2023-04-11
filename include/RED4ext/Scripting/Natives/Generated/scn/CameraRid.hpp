#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/CameraAnimationRid.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/RidTag.hpp>

namespace RED4ext
{
namespace scn
{
struct CameraRid
{
    static constexpr const char* NAME = "scnCameraRid";
    static constexpr const char* ALIAS = NAME;

    scn::RidTag tag; // 00
    DynArray<scn::CameraAnimationRid> animations; // 10
};
RED4EXT_ASSERT_SIZE(CameraRid, 0x20);
} // namespace scn
using scnCameraRid = scn::CameraRid;
} // namespace RED4ext

// clang-format on
