#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/InputDevicesMappingsJSON.hpp>

namespace RED4ext
{
namespace ink { 
struct InputKeyDictionaryJSON : ISerializable
{
    static constexpr const char* NAME = "inkInputKeyDictionaryJSON";
    static constexpr const char* ALIAS = NAME;

    DynArray<ink::InputDevicesMappingsJSON> devicesMappings; // 30
};
RED4EXT_ASSERT_SIZE(InputKeyDictionaryJSON, 0x40);
} // namespace ink
} // namespace RED4ext
