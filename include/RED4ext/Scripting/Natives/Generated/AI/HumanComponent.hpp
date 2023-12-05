#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/CAgent.hpp>

namespace RED4ext
{
namespace AI
{
struct HumanComponent : AI::CAgent
{
    static constexpr const char* NAME = "AIHumanComponent";
    static constexpr const char* ALIAS = NAME;

    TweakDBID movementParamsRecord; // 4F0
    uint8_t unk4F8[0x5B8 - 0x4F8]; // 4F8
};
RED4EXT_ASSERT_SIZE(HumanComponent, 0x5B8);
} // namespace AI
using AIHumanComponent = AI::HumanComponent;
} // namespace RED4ext

// clang-format on
