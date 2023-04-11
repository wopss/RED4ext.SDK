#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/MenuEntry.hpp>

namespace RED4ext
{
namespace ink
{
struct MenuResource : CResource
{
    static constexpr const char* NAME = "inkMenuResource";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x48 - 0x40]; // 40
    DynArray<ink::MenuEntry> menusEntries; // 48
    DynArray<CName> scenariosNames; // 58
    CName initialScenarioName; // 68
};
RED4EXT_ASSERT_SIZE(MenuResource, 0x70);
} // namespace ink
using inkMenuResource = ink::MenuResource;
} // namespace RED4ext

// clang-format on
