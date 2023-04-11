#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace ink
{
struct TweakDBIDSelector : IScriptable
{
    static constexpr const char* NAME = "inkTweakDBIDSelector";
    static constexpr const char* ALIAS = "TweakDBIDSelector";

    TweakDBID baseTweakID; // 40
};
RED4EXT_ASSERT_SIZE(TweakDBIDSelector, 0x48);
} // namespace ink
using inkTweakDBIDSelector = ink::TweakDBIDSelector;
using TweakDBIDSelector = ink::TweakDBIDSelector;
} // namespace RED4ext

// clang-format on
