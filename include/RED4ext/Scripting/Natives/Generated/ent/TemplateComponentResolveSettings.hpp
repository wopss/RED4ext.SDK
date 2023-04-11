#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/TemplateComponentResolveMode.hpp>

namespace RED4ext
{
namespace ent
{
struct TemplateComponentResolveSettings
{
    static constexpr const char* NAME = "entTemplateComponentResolveSettings";
    static constexpr const char* ALIAS = NAME;

    CName componentName; // 00
    CName nameParam; // 08
    ent::TemplateComponentResolveMode mode; // 10
    uint8_t unk11[0x18 - 0x11]; // 11
};
RED4EXT_ASSERT_SIZE(TemplateComponentResolveSettings, 0x18);
} // namespace ent
using entTemplateComponentResolveSettings = ent::TemplateComponentResolveSettings;
} // namespace RED4ext

// clang-format on
