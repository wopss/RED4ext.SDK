#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/appearance/PartComponentOverrides.hpp>

namespace RED4ext
{
namespace ent { struct EntityTemplate; }

namespace appearance
{
struct AppearancePartOverrides
{
    static constexpr const char* NAME = "appearanceAppearancePartOverrides";
    static constexpr const char* ALIAS = NAME;

    RaRef<ent::EntityTemplate> partResource; // 00
    DynArray<appearance::PartComponentOverrides> componentsOverrides; // 08
};
RED4EXT_ASSERT_SIZE(AppearancePartOverrides, 0x18);
} // namespace appearance
using appearanceAppearancePartOverrides = appearance::AppearancePartOverrides;
} // namespace RED4ext

// clang-format on
