#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>

namespace RED4ext
{
namespace ent
{
struct TemplateComponentBackendDataOverrideInfo
{
    static constexpr const char* NAME = "entTemplateComponentBackendDataOverrideInfo";
    static constexpr const char* ALIAS = NAME;

    CName componentName; // 00
    Vector2 offset; // 08
};
RED4EXT_ASSERT_SIZE(TemplateComponentBackendDataOverrideInfo, 0x10);
} // namespace ent
using entTemplateComponentBackendDataOverrideInfo = ent::TemplateComponentBackendDataOverrideInfo;
} // namespace RED4ext

// clang-format on
