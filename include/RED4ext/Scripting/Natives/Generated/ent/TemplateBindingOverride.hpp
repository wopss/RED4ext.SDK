#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>

namespace RED4ext
{
namespace ent { struct IBinding; }

namespace ent
{
struct TemplateBindingOverride
{
    static constexpr const char* NAME = "entTemplateBindingOverride";
    static constexpr const char* ALIAS = NAME;

    CName componentName; // 00
    CName propertyName; // 08
    Handle<ent::IBinding> binding; // 10
};
RED4EXT_ASSERT_SIZE(TemplateBindingOverride, 0x20);
} // namespace ent
using entTemplateBindingOverride = ent::TemplateBindingOverride;
} // namespace RED4ext

// clang-format on
