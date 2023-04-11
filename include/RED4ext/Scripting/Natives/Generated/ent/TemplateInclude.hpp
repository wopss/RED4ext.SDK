#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace ent { struct EntityTemplate; }

namespace ent
{
struct TemplateInclude
{
    static constexpr const char* NAME = "entTemplateInclude";
    static constexpr const char* ALIAS = NAME;

    CName name; // 00
    RaRef<ent::EntityTemplate> template_; // 08 -- template
};
RED4EXT_ASSERT_SIZE(TemplateInclude, 0x10);
} // namespace ent
using entTemplateInclude = ent::TemplateInclude;
} // namespace RED4ext

// clang-format on
