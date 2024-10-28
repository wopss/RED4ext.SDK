#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <RED4ext/Scripting/Natives/gameGameSessionDesc.hpp>

namespace RED4ext
{
RED4EXT_ASSERT_SIZE(game::GameSessionDesc, 0x1D0);
using gameGameSessionDesc = game::GameSessionDesc;
} // namespace RED4ext

/*
#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game
{
struct __declspec(align(0x10)) GameSessionDesc
{
    static constexpr const char* NAME = "gameGameSessionDesc";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x1D0 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(GameSessionDesc, 0x1D0);
} // namespace game
using gameGameSessionDesc = game::GameSessionDesc;
} // namespace RED4ext
*/

// clang-format on
