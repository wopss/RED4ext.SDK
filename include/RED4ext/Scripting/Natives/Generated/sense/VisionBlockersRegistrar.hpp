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
struct VisionBlockersRegistrar : IScriptable
{
    static constexpr const char* NAME = "senseVisionBlockersRegistrar";
    static constexpr const char* ALIAS = "VisionBlockersRegistrar";

    uint8_t unk40[0x58 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(VisionBlockersRegistrar, 0x58);
} // namespace sense
using senseVisionBlockersRegistrar = sense::VisionBlockersRegistrar;
using VisionBlockersRegistrar = sense::VisionBlockersRegistrar;
} // namespace RED4ext

// clang-format on
