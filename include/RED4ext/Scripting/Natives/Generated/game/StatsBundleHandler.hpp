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
struct StatsBundleHandler : IScriptable
{
    static constexpr const char* NAME = "gameStatsBundleHandler";
    static constexpr const char* ALIAS = "StatsBundleHandler";

    uint8_t unk40[0x50 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(StatsBundleHandler, 0x50);
} // namespace game
using gameStatsBundleHandler = game::StatsBundleHandler;
using StatsBundleHandler = game::StatsBundleHandler;
} // namespace RED4ext

// clang-format on
