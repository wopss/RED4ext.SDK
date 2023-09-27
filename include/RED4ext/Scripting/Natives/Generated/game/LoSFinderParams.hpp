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
struct LoSFinderParams : IScriptable
{
    static constexpr const char* NAME = "gameLoSFinderParams";
    static constexpr const char* ALIAS = "LoSFinderParams";

    uint8_t unk40[0x80 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(LoSFinderParams, 0x80);
} // namespace game
using gameLoSFinderParams = game::LoSFinderParams;
using LoSFinderParams = game::LoSFinderParams;
} // namespace RED4ext

// clang-format on
