#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game { 
struct IEffectInputParameter
{
    static constexpr const char* NAME = "gameIEffectInputParameter";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x8 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(IEffectInputParameter, 0x8);
} // namespace game
} // namespace RED4ext
