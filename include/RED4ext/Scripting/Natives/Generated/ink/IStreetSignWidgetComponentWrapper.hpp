#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/IWorldWidgetComponentWrapper.hpp>

namespace RED4ext
{
namespace ink
{
struct IStreetSignWidgetComponentWrapper : ink::IWorldWidgetComponentWrapper
{
    static constexpr const char* NAME = "inkIStreetSignWidgetComponentWrapper";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk08[0x10 - 0x8]; // 8
};
RED4EXT_ASSERT_SIZE(IStreetSignWidgetComponentWrapper, 0x10);
} // namespace ink
using inkIStreetSignWidgetComponentWrapper = ink::IStreetSignWidgetComponentWrapper;
} // namespace RED4ext

// clang-format on
