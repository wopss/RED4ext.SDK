#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game::data
{
struct TweakDBInterface : IScriptable
{
    static constexpr const char* NAME = "gamedataTweakDBInterface";
    static constexpr const char* ALIAS = "TweakDBInterface";

};
RED4EXT_ASSERT_SIZE(TweakDBInterface, 0x40);
} // namespace game::data
using gamedataTweakDBInterface = game::data::TweakDBInterface;
using TweakDBInterface = game::data::TweakDBInterface;
} // namespace RED4ext

// clang-format on
