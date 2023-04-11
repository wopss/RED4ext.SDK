#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>

namespace RED4ext
{
namespace game { struct IPrereq; }

namespace game
{
struct ActionPrereqs
{
    static constexpr const char* NAME = "gameActionPrereqs";
    static constexpr const char* ALIAS = "ActionPrereqs";

    CName actionName; // 00
    DynArray<Handle<game::IPrereq>> prereqs; // 08
};
RED4EXT_ASSERT_SIZE(ActionPrereqs, 0x18);
} // namespace game
using gameActionPrereqs = game::ActionPrereqs;
using ActionPrereqs = game::ActionPrereqs;
} // namespace RED4ext

// clang-format on
