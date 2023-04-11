#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace services
{
struct TrialHelper
{
    static constexpr const char* NAME = "servicesTrialHelper";
    static constexpr const char* ALIAS = "TrialHelper";

    uint8_t unk00[0x1 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(TrialHelper, 0x1);
} // namespace services
using servicesTrialHelper = services::TrialHelper;
using TrialHelper = services::TrialHelper;
} // namespace RED4ext

// clang-format on
