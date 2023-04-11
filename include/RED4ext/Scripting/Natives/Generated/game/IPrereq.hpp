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
struct IPrereq : IScriptable
{
    static constexpr const char* NAME = "gameIPrereq";
    static constexpr const char* ALIAS = "IPrereq";

};
RED4EXT_ASSERT_SIZE(IPrereq, 0x40);
} // namespace game
using gameIPrereq = game::IPrereq;
using IPrereq = game::IPrereq;
} // namespace RED4ext

// clang-format on
