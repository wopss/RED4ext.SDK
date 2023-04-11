#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace anim
{
struct IAnimNode_PostProcess : ISerializable
{
    static constexpr const char* NAME = "animIAnimNode_PostProcess";
    static constexpr const char* ALIAS = NAME;

    bool isEnabled; // 30
    uint8_t unk31[0x38 - 0x31]; // 31
};
RED4EXT_ASSERT_SIZE(IAnimNode_PostProcess, 0x38);
} // namespace anim
using animIAnimNode_PostProcess = anim::IAnimNode_PostProcess;
} // namespace RED4ext

// clang-format on
