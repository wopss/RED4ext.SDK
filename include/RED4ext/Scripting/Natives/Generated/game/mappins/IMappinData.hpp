#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game::mappins { 
struct IMappinData
{
    static constexpr const char* NAME = "gamemappinsIMappinData";
    static constexpr const char* ALIAS = "IMappinData";

    uint8_t unk00[0x8 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(IMappinData, 0x8);
} // namespace game::mappins
using IMappinData = game::mappins::IMappinData;
} // namespace RED4ext
