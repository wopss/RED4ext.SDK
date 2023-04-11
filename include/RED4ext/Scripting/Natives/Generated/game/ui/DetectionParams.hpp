#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game::ui
{
struct DetectionParams
{
    static constexpr const char* NAME = "gameuiDetectionParams";
    static constexpr const char* ALIAS = NAME;

    float detectionProgress; // 00
};
RED4EXT_ASSERT_SIZE(DetectionParams, 0x4);
} // namespace game::ui
using gameuiDetectionParams = game::ui::DetectionParams;
} // namespace RED4ext

// clang-format on
