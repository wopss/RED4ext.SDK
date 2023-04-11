#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/IIconAtlasManager.hpp>

namespace RED4ext
{
namespace ink
{
struct NullIconAtlasManager : ink::IIconAtlasManager
{
    static constexpr const char* NAME = "inkNullIconAtlasManager";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(NullIconAtlasManager, 0x8);
} // namespace ink
using inkNullIconAtlasManager = ink::NullIconAtlasManager;
} // namespace RED4ext

// clang-format on
