#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/GenderMask.hpp>

namespace RED4ext
{
namespace scn::screenplay
{
struct OptionUsage
{
    static constexpr const char* NAME = "scnscreenplayOptionUsage";
    static constexpr const char* ALIAS = NAME;

    scn::GenderMask playerGenderMask; // 00
};
RED4EXT_ASSERT_SIZE(OptionUsage, 0x1);
} // namespace scn::screenplay
using scnscreenplayOptionUsage = scn::screenplay::OptionUsage;
} // namespace RED4ext

// clang-format on
