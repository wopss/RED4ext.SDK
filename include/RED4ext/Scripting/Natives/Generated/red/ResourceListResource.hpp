#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>

namespace RED4ext
{
struct CResource;

namespace red
{
struct ResourceListResource : CResource
{
    static constexpr const char* NAME = "redResourceListResource";
    static constexpr const char* ALIAS = NAME;

    DynArray<RaRef<CResource>> resources; // 40
    DynArray<CString> descriptions; // 50
};
RED4EXT_ASSERT_SIZE(ResourceListResource, 0x60);
} // namespace red
using redResourceListResource = red::ResourceListResource;
} // namespace RED4ext

// clang-format on
