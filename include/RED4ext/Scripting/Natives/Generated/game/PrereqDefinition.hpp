#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>

namespace RED4ext
{
namespace game { struct IPrereq; }

namespace game
{
struct PrereqDefinition
{
    static constexpr const char* NAME = "gamePrereqDefinition";
    static constexpr const char* ALIAS = NAME;

    CName prereqName; // 00
    Handle<game::IPrereq> prereq; // 08
};
RED4EXT_ASSERT_SIZE(PrereqDefinition, 0x18);
} // namespace game
using gamePrereqDefinition = game::PrereqDefinition;
} // namespace RED4ext

// clang-format on
