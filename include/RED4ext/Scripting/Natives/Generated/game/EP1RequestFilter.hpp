#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/CustomRequestFilter.hpp>

namespace RED4ext
{
namespace game
{
struct EP1RequestFilter : game::CustomRequestFilter
{
    static constexpr const char* NAME = "gameEP1RequestFilter";
    static constexpr const char* ALIAS = "EP1RequestFilter";

    uint8_t unk08[0x18 - 0x8]; // 8
    bool isEP1; // 18
    uint8_t unk19[0x20 - 0x19]; // 19
};
RED4EXT_ASSERT_SIZE(EP1RequestFilter, 0x20);
} // namespace game
using gameEP1RequestFilter = game::EP1RequestFilter;
using EP1RequestFilter = game::EP1RequestFilter;
} // namespace RED4ext

// clang-format on
