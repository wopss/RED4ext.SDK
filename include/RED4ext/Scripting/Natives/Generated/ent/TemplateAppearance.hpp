#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace appearance { struct AppearanceResource; }

namespace ent
{
struct TemplateAppearance
{
    static constexpr const char* NAME = "entTemplateAppearance";
    static constexpr const char* ALIAS = NAME;

    CName name; // 00
    RaRef<appearance::AppearanceResource> appearanceResource; // 08
    CName appearanceName; // 10
};
RED4EXT_ASSERT_SIZE(TemplateAppearance, 0x18);
} // namespace ent
using entTemplateAppearance = ent::TemplateAppearance;
} // namespace RED4ext

// clang-format on
