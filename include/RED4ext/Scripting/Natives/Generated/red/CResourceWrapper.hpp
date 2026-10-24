#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ECookingPlatform.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/ResourceReferenceScriptToken.hpp>

namespace RED4ext
{
namespace red
{
struct CResourceWrapper
{
    static constexpr const char* NAME = "redCResourceWrapper";
    static constexpr const char* ALIAS = "CResourceWrapper";

    red::ResourceReferenceScriptToken path; // 00
    ECookingPlatform cookingPlatform; // 08
    uint8_t unk09[0x10 - 0x9]; // 9
};
RED4EXT_ASSERT_SIZE(CResourceWrapper, 0x10);
} // namespace red
using redCResourceWrapper = red::CResourceWrapper;
using CResourceWrapper = red::CResourceWrapper;
} // namespace RED4ext

// clang-format on
