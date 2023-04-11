#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace sense
{
struct IShape : IScriptable
{
    static constexpr const char* NAME = "senseIShape";
    static constexpr const char* ALIAS = "ISenseShape";

    uint8_t unk40[0x44 - 0x40]; // 40
    TweakDBID id; // 44
    uint8_t unk4C[0x50 - 0x4C]; // 4C
};
RED4EXT_ASSERT_SIZE(IShape, 0x50);
} // namespace sense
using senseIShape = sense::IShape;
using ISenseShape = sense::IShape;
} // namespace RED4ext

// clang-format on
