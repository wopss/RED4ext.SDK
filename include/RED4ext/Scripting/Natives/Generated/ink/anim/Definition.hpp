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
namespace ink::anim { struct Event; }
namespace ink::anim { struct Interpolator; }

namespace ink::anim
{
struct Definition : IScriptable
{
    static constexpr const char* NAME = "inkanimDefinition";
    static constexpr const char* ALIAS = "inkAnimDef";

    DynArray<Handle<ink::anim::Interpolator>> interpolators; // 40
    DynArray<Handle<ink::anim::Event>> events; // 50
};
RED4EXT_ASSERT_SIZE(Definition, 0x60);
} // namespace ink::anim
using inkanimDefinition = ink::anim::Definition;
using inkAnimDef = ink::anim::Definition;
} // namespace RED4ext

// clang-format on
