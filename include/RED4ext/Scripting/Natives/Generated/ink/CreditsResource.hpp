#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CreditsSectionEntry.hpp>

namespace RED4ext
{
namespace ink
{
struct CreditsResource : CResource
{
    static constexpr const char* NAME = "inkCreditsResource";
    static constexpr const char* ALIAS = NAME;

    DynArray<ink::CreditsSectionEntry> sections; // 40
};
RED4EXT_ASSERT_SIZE(CreditsResource, 0x50);
} // namespace ink
using inkCreditsResource = ink::CreditsResource;
} // namespace RED4ext

// clang-format on
