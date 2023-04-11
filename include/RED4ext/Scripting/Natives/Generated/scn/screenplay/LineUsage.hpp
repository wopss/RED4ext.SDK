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
struct LineUsage
{
    static constexpr const char* NAME = "scnscreenplayLineUsage";
    static constexpr const char* ALIAS = NAME;

    scn::GenderMask playerGenderMask; // 00
};
RED4EXT_ASSERT_SIZE(LineUsage, 0x1);
} // namespace scn::screenplay
using scnscreenplayLineUsage = scn::screenplay::LineUsage;
} // namespace RED4ext

// clang-format on
