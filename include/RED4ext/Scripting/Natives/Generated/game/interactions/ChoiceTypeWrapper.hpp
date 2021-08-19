#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game::interactions { 
struct ChoiceTypeWrapper
{
    static constexpr const char* NAME = "gameinteractionsChoiceTypeWrapper";
    static constexpr const char* ALIAS = NAME;

    uint32_t properties; // 00
};
RED4EXT_ASSERT_SIZE(ChoiceTypeWrapper, 0x4);
} // namespace game::interactions
} // namespace RED4ext
