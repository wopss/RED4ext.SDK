#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace ink
{
struct ClippedMenuScenarioData : IScriptable
{
    static constexpr const char* NAME = "inkClippedMenuScenarioData";
    static constexpr const char* ALIAS = NAME;

    DynArray<CName> menus; // 40
};
RED4EXT_ASSERT_SIZE(ClippedMenuScenarioData, 0x50);
} // namespace ink
using inkClippedMenuScenarioData = ink::ClippedMenuScenarioData;
} // namespace RED4ext

// clang-format on
