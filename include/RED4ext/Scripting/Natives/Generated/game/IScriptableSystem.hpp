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
struct IScriptableSystem : IScriptable
{
    static constexpr const char* NAME = "gameIScriptableSystem";
    static constexpr const char* ALIAS = "IScriptableSystem";

};
RED4EXT_ASSERT_SIZE(IScriptableSystem, 0x40);
} // namespace game
using gameIScriptableSystem = game::IScriptableSystem;
using IScriptableSystem = game::IScriptableSystem;
} // namespace RED4ext

// clang-format on
