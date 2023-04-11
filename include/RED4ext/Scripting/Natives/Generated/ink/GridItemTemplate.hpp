#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLibraryReference.hpp>

namespace RED4ext
{
namespace ink
{
struct GridItemTemplate
{
    static constexpr const char* NAME = "inkGridItemTemplate";
    static constexpr const char* ALIAS = NAME;

    ink::WidgetLibraryReference widget; // 00
    uint32_t sizeX; // 10
    uint32_t sizeY; // 14
};
RED4EXT_ASSERT_SIZE(GridItemTemplate, 0x18);
} // namespace ink
using inkGridItemTemplate = ink::GridItemTemplate;
} // namespace RED4ext

// clang-format on
