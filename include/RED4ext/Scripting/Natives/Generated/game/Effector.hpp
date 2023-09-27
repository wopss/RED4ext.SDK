#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game
{
struct Effector : IScriptable
{
    static constexpr const char* NAME = "gameEffector";
    static constexpr const char* ALIAS = "Effector";

    uint8_t unk40[0xA8 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(Effector, 0xA8);
} // namespace game
using gameEffector = game::Effector;
using Effector = game::Effector;
} // namespace RED4ext

// clang-format on
