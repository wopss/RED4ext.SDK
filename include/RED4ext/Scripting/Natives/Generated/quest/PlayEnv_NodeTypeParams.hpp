#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace world { struct EnvironmentAreaParameters; }

namespace quest
{
struct PlayEnv_NodeTypeParams
{
    static constexpr const char* NAME = "questPlayEnv_NodeTypeParams";
    static constexpr const char* ALIAS = NAME;

    bool enable; // 00
    uint8_t unk01[0x8 - 0x1]; // 1
    Ref<world::EnvironmentAreaParameters> envParams; // 08
    float blendTime; // 20
    uint8_t unk24[0x28 - 0x24]; // 24
};
RED4EXT_ASSERT_SIZE(PlayEnv_NodeTypeParams, 0x28);
} // namespace quest
using questPlayEnv_NodeTypeParams = quest::PlayEnv_NodeTypeParams;
} // namespace RED4ext

// clang-format on
