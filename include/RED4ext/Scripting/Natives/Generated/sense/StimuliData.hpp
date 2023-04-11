#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace sense
{
struct StimuliData : IScriptable
{
    static constexpr const char* NAME = "senseStimuliData";
    static constexpr const char* ALIAS = "StimuliData";

};
RED4EXT_ASSERT_SIZE(StimuliData, 0x40);
} // namespace sense
using senseStimuliData = sense::StimuliData;
using StimuliData = sense::StimuliData;
} // namespace RED4ext

// clang-format on
