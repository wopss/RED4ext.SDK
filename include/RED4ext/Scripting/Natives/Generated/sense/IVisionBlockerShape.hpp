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
struct IVisionBlockerShape : IScriptable
{
    static constexpr const char* NAME = "senseIVisionBlockerShape";
    static constexpr const char* ALIAS = "IVisionBlockerShape";

};
RED4EXT_ASSERT_SIZE(IVisionBlockerShape, 0x40);
} // namespace sense
using senseIVisionBlockerShape = sense::IVisionBlockerShape;
using IVisionBlockerShape = sense::IVisionBlockerShape;
} // namespace RED4ext

// clang-format on
