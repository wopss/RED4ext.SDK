#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game::mappins
{
struct IVisualObject : IScriptable
{
    static constexpr const char* NAME = "gamemappinsIVisualObject";
    static constexpr const char* ALIAS = "IVisualObject";

};
RED4EXT_ASSERT_SIZE(IVisualObject, 0x40);
} // namespace game::mappins
using gamemappinsIVisualObject = game::mappins::IVisualObject;
using IVisualObject = game::mappins::IVisualObject;
} // namespace RED4ext

// clang-format on
