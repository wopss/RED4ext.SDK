#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game::device
{
struct Clearance : IScriptable
{
    static constexpr const char* NAME = "gamedeviceClearance";
    static constexpr const char* ALIAS = "Clearance";

    int32_t max; // 40
    int32_t min; // 44
};
RED4EXT_ASSERT_SIZE(Clearance, 0x48);
} // namespace game::device
using gamedeviceClearance = game::device::Clearance;
using Clearance = game::device::Clearance;
} // namespace RED4ext

// clang-format on
