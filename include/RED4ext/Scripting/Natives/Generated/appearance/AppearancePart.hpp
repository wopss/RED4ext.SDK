#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace ent { struct EntityTemplate; }

namespace appearance
{
struct AppearancePart
{
    static constexpr const char* NAME = "appearanceAppearancePart";
    static constexpr const char* ALIAS = NAME;

    RaRef<ent::EntityTemplate> resource; // 00
};
RED4EXT_ASSERT_SIZE(AppearancePart, 0x8);
} // namespace appearance
using appearanceAppearancePart = appearance::AppearancePart;
} // namespace RED4ext

// clang-format on
