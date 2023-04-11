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
struct IStatPoolsListener : IScriptable
{
    static constexpr const char* NAME = "gameIStatPoolsListener";
    static constexpr const char* ALIAS = "IStatPoolsListener";

};
RED4EXT_ASSERT_SIZE(IStatPoolsListener, 0x40);
} // namespace game
using gameIStatPoolsListener = game::IStatPoolsListener;
using IStatPoolsListener = game::IStatPoolsListener;
} // namespace RED4ext

// clang-format on
