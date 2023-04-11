#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/LocalizationStringMapEntry.hpp>

namespace RED4ext
{
namespace ent
{
struct LocalizationStringComponent : ent::IComponent
{
    static constexpr const char* NAME = "entLocalizationStringComponent";
    static constexpr const char* ALIAS = "LocalizationStringComponent";

    DynArray<ent::LocalizationStringMapEntry> Strings; // 90
};
RED4EXT_ASSERT_SIZE(LocalizationStringComponent, 0xA0);
} // namespace ent
using entLocalizationStringComponent = ent::LocalizationStringComponent;
using LocalizationStringComponent = ent::LocalizationStringComponent;
} // namespace RED4ext

// clang-format on
