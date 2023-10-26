#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Quaternion.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IOrientationProvider.hpp>

namespace RED4ext
{
namespace ent
{
struct __declspec(align(0x10)) StaticOrientationProvider : ent::IOrientationProvider
{
    static constexpr const char* NAME = "entStaticOrientationProvider";
    static constexpr const char* ALIAS = NAME;

    Quaternion staticOrientation; // 40
};
RED4EXT_ASSERT_SIZE(StaticOrientationProvider, 0x50);
} // namespace ent
using entStaticOrientationProvider = ent::StaticOrientationProvider;
} // namespace RED4ext

// clang-format on
