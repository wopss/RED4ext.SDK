#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>

namespace RED4ext
{
namespace game::ui
{
struct CharactersChain
{
    static constexpr const char* NAME = "gameuiCharactersChain";
    static constexpr const char* ALIAS = "CharactersChain";

    DynArray<uint32_t> rarities; // 00
    uint32_t matchedValues; // 10
    int32_t ownerId; // 14
    bool isFulfilled; // 18
    bool isPossible; // 19
    uint8_t unk1A[0x20 - 0x1A]; // 1A
};
RED4EXT_ASSERT_SIZE(CharactersChain, 0x20);
} // namespace game::ui
using gameuiCharactersChain = game::ui::CharactersChain;
using CharactersChain = game::ui::CharactersChain;
} // namespace RED4ext

// clang-format on
