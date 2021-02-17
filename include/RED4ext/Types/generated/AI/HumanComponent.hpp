#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/AI/CAgent.hpp>

namespace RED4ext
{
namespace AI { 
struct HumanComponent : AI::CAgent
{
    static constexpr const char* NAME = "AIHumanComponent";
    static constexpr const char* ALIAS = "AIHumanComponent";

    TweakDBID movementParamsRecord; // 920
    uint8_t unk928[0x9D0 - 0x928]; // 928
};
RED4EXT_ASSERT_SIZE(HumanComponent, 0x9D0);
} // namespace AI
} // namespace RED4ext
