#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace scn::events
{
struct CameraOverrideSettings
{
    static constexpr const char* NAME = "scneventsCameraOverrideSettings";
    static constexpr const char* ALIAS = NAME;

    bool overrideFov; // 00
    bool overrideDof; // 01
    bool resetFov; // 02
    bool resetDof; // 03
};
RED4EXT_ASSERT_SIZE(CameraOverrideSettings, 0x4);
} // namespace scn::events
using scneventsCameraOverrideSettings = scn::events::CameraOverrideSettings;
} // namespace RED4ext

// clang-format on
