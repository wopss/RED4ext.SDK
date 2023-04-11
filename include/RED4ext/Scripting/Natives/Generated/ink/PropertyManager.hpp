#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/PropertyBinding.hpp>

namespace RED4ext
{
namespace ink
{
struct PropertyManager : ISerializable
{
    static constexpr const char* NAME = "inkPropertyManager";
    static constexpr const char* ALIAS = NAME;

    DynArray<ink::PropertyBinding> bindings; // 30
    uint8_t unk40[0x68 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(PropertyManager, 0x68);
} // namespace ink
using inkPropertyManager = ink::PropertyManager;
} // namespace RED4ext

// clang-format on
