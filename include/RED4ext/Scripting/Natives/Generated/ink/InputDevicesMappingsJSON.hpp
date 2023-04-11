#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/InputIconMappingJSON.hpp>

namespace RED4ext
{
namespace ink
{
struct InputDevicesMappingsJSON
{
    static constexpr const char* NAME = "inkInputDevicesMappingsJSON";
    static constexpr const char* ALIAS = NAME;

    DynArray<CName> devices; // 00
    DynArray<ink::InputIconMappingJSON> mappings; // 10
};
RED4EXT_ASSERT_SIZE(InputDevicesMappingsJSON, 0x20);
} // namespace ink
using inkInputDevicesMappingsJSON = ink::InputDevicesMappingsJSON;
} // namespace RED4ext

// clang-format on
