#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/CAgent.hpp>

namespace RED4ext
{
namespace AI { 
struct HumanComponent : AI::CAgent
{
    static constexpr const char* NAME = "AIHumanComponent";
    static constexpr const char* ALIAS = "AIHumanComponent";

    TweakDBID movementParamsRecord; // A10
    uint8_t unkA18[0xAC0 - 0xA18]; // A18
};
RED4EXT_ASSERT_SIZE(HumanComponent, 0xAC0);
} // namespace AI
} // namespace RED4ext
