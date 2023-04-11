#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace ink::anim { struct Definition; }
namespace ink::anim { struct SequenceTargetInfo; }

namespace ink::anim
{
struct Sequence : IScriptable
{
    static constexpr const char* NAME = "inkanimSequence";
    static constexpr const char* ALIAS = "inkAnimSequence";

    CName name; // 40
    DynArray<Handle<ink::anim::Definition>> definitions; // 48
    DynArray<Handle<ink::anim::SequenceTargetInfo>> targets; // 58
};
RED4EXT_ASSERT_SIZE(Sequence, 0x68);
} // namespace ink::anim
using inkanimSequence = ink::anim::Sequence;
using inkAnimSequence = ink::anim::Sequence;
} // namespace RED4ext

// clang-format on
