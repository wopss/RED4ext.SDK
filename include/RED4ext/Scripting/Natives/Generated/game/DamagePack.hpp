#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game { struct Damage; }

namespace game
{
struct DamagePack : IScriptable
{
    static constexpr const char* NAME = "gameDamagePack";
    static constexpr const char* ALIAS = "DamagePack";

    DynArray<Handle<game::Damage>> damageList; // 40
};
RED4EXT_ASSERT_SIZE(DamagePack, 0x50);
} // namespace game
using gameDamagePack = game::DamagePack;
using DamagePack = game::DamagePack;
} // namespace RED4ext

// clang-format on
