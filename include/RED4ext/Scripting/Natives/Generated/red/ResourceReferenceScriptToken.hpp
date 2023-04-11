#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
struct CResource;

namespace red
{
struct ResourceReferenceScriptToken
{
    static constexpr const char* NAME = "redResourceReferenceScriptToken";
    static constexpr const char* ALIAS = "ResRef";

    RaRef<CResource> resource; // 00
};
RED4EXT_ASSERT_SIZE(ResourceReferenceScriptToken, 0x8);
} // namespace red
using redResourceReferenceScriptToken = red::ResourceReferenceScriptToken;
using ResRef = red::ResourceReferenceScriptToken;
} // namespace RED4ext

// clang-format on
