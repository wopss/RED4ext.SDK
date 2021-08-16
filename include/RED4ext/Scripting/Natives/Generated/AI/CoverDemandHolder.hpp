#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace AI { 
struct CoverDemandHolder : IScriptable
{
    static constexpr const char* NAME = "AICoverDemandHolder";
    static constexpr const char* ALIAS = "CoverDemandHolder";

    uint8_t unk40[0x58 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(CoverDemandHolder, 0x58);
} // namespace AI
using CoverDemandHolder = AI::CoverDemandHolder;
} // namespace RED4ext
